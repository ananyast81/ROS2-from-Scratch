import rclpy
import time
from rclpy.node import Node
from rclpy.action import ActionServer, GoalResponse, CancelResponse
from rclpy.action.server import ServerGoalHandle
from rclpy.executors import MultiThreadedExecutor
from rclpy.callback_groups import ReentrantCallbackGroup
from my_robot_interfaces.action import CountUntil

class CountUntilServerNode(Node):

    def __init__(self):
        super().__init__("count_until_server") # This name is only used in graphs
        self.count_until_server_ = ActionServer(
            self,
            CountUntil,
            "count_until",
            goal_callback = self.goal_callback, # Func to receive and process goal
            cancel_callback = self.cancel_callback,
            callback_group = ReentrantCallbackGroup(),
            execute_callback = self.execute_callback # Func to execute if goal is accepted
        )
        
    def goal_callback(self, goal_request:CountUntil.Goal):
        self.get_logger().info("Received a goal")
        if goal_request.target_number < 0:
            self.get_logger().warn("Rejecting the goal, target number must be positive")
            return GoalResponse.REJECT
        self.get_logger().info("Accepting the goal")
        return GoalResponse.ACCEPT
    
    def cancel_callback(self, goal_handle:ServerGoalHandle):
        self.get_logger().info("Received a cancel request")
        return CancelResponse.ACCEPT

    def execute_callback(self, goal_handle: ServerGoalHandle):
        # goal_handle - to access the goal data
        target_number = goal_handle.request.target_number
        delay = goal_handle.request.delay
        result = CountUntil.Result()
        counter = 0
        feedback = CountUntil.Feedback()
        self.get_logger().info("Executing the goal")
        for i in range(target_number):
            if goal_handle.is_cancel_requested:
                self.get_logger().info("Cancelling goal")
                goal_handle.canceled() # Setting the state
                result.reached_number = counter
                return result
            counter += 1
            self.get_logger().info(str(counter))
            # Updating feedback
            feedback.current_number = counter
            goal_handle.publish_feedback(feedback)
            time.sleep(delay)
        goal_handle.succeed()
        result.reached_number = counter
        return result
    
def main(args=None):
    rclpy.init(args=args)
    node = CountUntilServerNode()
    rclpy.spin(node, MultiThreadedExecutor())
    rclpy.shutdown()

if __name__=="__main__":
    main()