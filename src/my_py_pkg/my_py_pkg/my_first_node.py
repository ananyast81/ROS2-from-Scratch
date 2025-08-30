# !/usr/bin/env python3
import rclpy
from rclpy.node import Node

# MyCustomNode - Node name
class MyCustomNode(Node): #Inherit from Node class

    # Constructor
    def __init__(self):
        super().__init__('my_node_name')
        self.counter_ = 0
        self.timer_ = self.create_timer(1.0, self.print_hello)
    
    # Callback funciton (called automatically by system when obj is created)
    def print_hello(self):
        self.get_logger().info("Hello "+str(self.counter_))
        self.counter_ += 1

def main(args=None):
    #Initialize ros2 communication
    rclpy.init(args=args)

    # Creating a MyCustomNode object
    node = MyCustomNode()

    # Spin - Keeps the node alive until ctrl+c is pressed
    rclpy.spin(node)

    # To kill the node
    rclpy.shutdown()

if __name__ == '__main__':
    main()