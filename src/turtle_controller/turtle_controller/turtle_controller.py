import rclpy
from rclpy.node import Node
from turtlesim.msg import Pose
from geometry_msgs.msg import Twist
from turtlesim.srv import SetPen
from my_robot_interfaces.srv import ActivateTurtle

class TurtleController(Node):

    def __init__(self):
        super().__init__("turtle_controller")
        self.declare_parameter("colour_1", [0,255,0]) # right - green
        self.declare_parameter("colour_2", [255,0,0]) # left - red
        self.declare_parameter("turtle_velocity", 1.0)
        self.colour_right_ = self.get_parameter("colour_1").value
        self.colour_left_ = self.get_parameter("colour_2").value
        self.vel_ = self.get_parameter("turtle_velocity").value

        self.previous_x_ = 0.0
        self.turtle_active_ = True
        # Need to publish linear and angular velocity (Twist)
        # Need to subscribe to x position (Velocity)
        self.turtle_subscriber_ = self.create_subscription(Pose, "/turtle1/pose", self.left_right_callback, 10)
        self.turtle_publisher_ = self.create_publisher(Twist, "/turtle1/cmd_vel", 10)
        # CLient to the set_pen service server
        self.turtle_client_ = self.create_client(SetPen, "/turtle1/set_pen")
        # Turtle activating service
        self.turtle_activation_service = self.create_service(ActivateTurtle, "activate_turtle", self.callback_turtle_activation)
        self.get_logger().info("Turtle Controller Node has started")


    def left_right_callback(self, msg1:Pose):
        # Recieves position of the turtle from Pose (need to determine left or right)
        msg2 = Twist()
        self.x_pos = msg1.x

        if self.turtle_active_:
            if self.x_pos<5.5:
                msg2.linear.x = self.vel_
                msg2.angular.z = self.vel_
                # self.call_set_pen(0,255,0)
            else:
                msg2.linear.x = self.vel_ * 2
                msg2.angular.z = self.vel_ * 2
                # self.call_set_pen(255,0,0)
            self.turtle_publisher_.publish(msg2)

            if self.x_pos<=5.5 and self.previous_x_>5.5:
                self.previous_x_ = self.x_pos
                self.get_logger().info("Set pen colour to green")
                self.call_set_pen(self.colour_left_[0], self.colour_left_[1], self.colour_left_[2])
            elif self.x_pos>5.5 and self.previous_x_<=5.5:
                self.previous_x_ = self.x_pos
                self.get_logger().info("Set pen colour to red")
                self.call_set_pen(self.colour_right_[0], self.colour_right_[1], self.colour_right_[2])

    def call_set_pen(self, r, g, b):
        while not self.turtle_client_.wait_for_service(1.0):
            self.get_logger().warn("Waiting for service ...")
        request = SetPen.Request()
        request.g = g
        request.b = b
        request.r = r
        future = self.turtle_client_.call_async(request)
        future.add_done_callback(self.callback_set_pen_response)

    def callback_set_pen_response(self, future):
        self.get_logger().info("Pen colour changed")

    def callback_turtle_activation(self, request:ActivateTurtle.Request, response:ActivateTurtle.Response):
        self.turtle_active_ = request.activate
        if request.activate:
            response.message = "Starting the turtle"
        else:
            response.message = "Stopping the turtle"
        return response

def main(args=None):
    rclpy.init(args=args)
    node = TurtleController()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__=="__main__":
    main()