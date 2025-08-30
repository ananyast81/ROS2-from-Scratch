# !/usr/bin/env python3
import rclpy
from rclpy.node import Node
from example_interfaces.msg import Int64
from my_robot_interfaces.srv import ResetCounter

class NumberCounter(Node):

    def __init__(self):
        super().__init__("number_counter")
        self.counter_ = 0
        self.number_subscriber_ = self.create_subscription(Int64, "number", self.callback_number, 10)
        # Parameters - topic interface, topic name, callback function, queue size

        # Creating a service server
        # When you're creating a service server, you're creating a service itself
        self.reset_counter_service_ = self.create_service(ResetCounter, "reset_counter", self.callback_reset_counter)
        # Parameters - service interface, service name, service callback

        self.get_logger().info("Number counter has been started")

    def callback_number(self, msg:Int64):
        self.counter_ += msg.data
        self.get_logger().info("Counter "+str(self.counter_))

    # When request is received, this callback is triggered and request is passed on to this func
    # This func. receives 2 objects - request(contains data sent by client) and response(empty, needs to be returned)
    def callback_reset_counter(self, request:ResetCounter.Request, response:ResetCounter.Response):
        #Validating the request
        if request.reset_value < 0:
            response.success = False
            response.message = "Cannot reset counter to a negative value"
        elif request.reset_value > self.counter_:
            response.success = False
            response.message = "Reset value must be lower than current counter value"
        else:
            self.counter_ = request.reset_value
            self.get_logger().info("Reset counter to "+str(self.counter_))
            response.success = True
            response.message = "Success"
        return response

def main(args=None):
    rclpy.init(args=args)
    node = NumberCounter()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()