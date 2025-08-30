import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from rclpy.action.client import ClientGoalHandle, GoalStatus
from my_robot_interfaces.action import CountUntil

class CountUntilClientNode(Node):

    def __init__(self):
        super().__init__("count_until_client")
        self.count_until_client = ActionClient(
            self,
            CountUntil,
            "count_until",
        )
    
    def send_goal(self, target_number, delay):
        self.count_until_client.wait_for_server() # Waits indefinitely (no timeout given) for server to start running
        goal = CountUntil.Goal()
        goal.target_number = target_number
        goal.delay = delay
        self.count_until_client.send_goal_async(goal, feedback_callback=self.goal_feedback_callback).add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future):
        # The result of goal request is stored in future.result()
        # future.result() - contains 2 parameters - status(succeeded, aborted, cancelled, etc.) 
        #                                         - result(in this case reached_number)
        # Here future.result() is a ClientGoalHandle object
        # This result is assigned to goal_handle_
        self.goal_handle_: ClientGoalHandle = future.result()
        if self.goal_handle_.accepted:
            self.get_logger().info("Goal accepted")
            self.goal_handle_.get_result_async().add_done_callback(self.goal_result_callback)
        else:
            self.get_logger().info("Goal rejected")

    def cancel_goal(self):
        self.get_logger().info("Sending a cancel goal request")
        self.goal_handle_.cancel_goal_async()
    
    def goal_result_callback(self, future):
        status = future.result().status
        result = future.result().result
        if status == GoalStatus.STATUS_SUCCEEDED:
            self.get_logger().info("Success")
        elif status == GoalStatus.STATUS_ABORTED:
            self.get_logger().error("Aborted")
        elif status == GoalStatus.STATUS_CANCELED:
            self.get_logger().warn("Canceled")
        self.get_logger().info("Result: "+str(result.reached_number))

    def goal_feedback_callback(self, feedback_msg):
        number = feedback_msg.feedback.current_number
        # if number >= 2:
        #     self.cancel_goal()
        self.get_logger().info("Got feeedback: "+str(number))

def main(args=None):
    rclpy.init(args=args)
    node = CountUntilClientNode()
    node.send_goal(5, 0.5)
    rclpy.spin(node)
    rclpy.shutdown()

if __name__=="__main__":
    main()