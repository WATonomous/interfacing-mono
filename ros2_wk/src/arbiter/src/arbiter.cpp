#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"


typedef struct twist_literal{
    uint32_t linear;
    uint32_t angular;
} twist_literal;

typedef twist_literal* twist_literal_p;

class ArbiterNode : public rclcpp::Node 
{
public:
    ArbiterNode() : Node("arbiter")
    {
        // Create a subscription to the 'arbiter_in' topic
        throttle_in_sub_ = this->create_subscription<geometry_msgs::msg::Twist>(
            "arbiter_in_throttle", 10, 
            std::bind(&ArbiterNode::arbiterInCallback, this, std::placeholders::_1));
        brake_in_sub_ = this->create_subscription<geometry_msgs::msg::Twist>(
            "arbiter_in_brake", 10, 
            std::bind(&ArbiterNode::arbiterInCallback, this, std::placeholders::_1));
        steering_in_sub_ = this->create_subscription<geometry_msgs::msg::Twist>(
            "arbiter_in_steering", 10, 
            std::bind(&ArbiterNode::arbiterInCallback, this, std::placeholders::_1));
    }

private:
    // Callback function to handle the received Twist messages
    void arbiterInCallback(const geometry_msgs::msg::Twist::SharedPtr msg)
    {
        RCLCPP_INFO(this->get_logger(), "Received Twist message: linear.x: %.2f, angular.z: %.2f", 
                    msg->linear.x, msg->angular.z);
    }
    rclcpp::Subscription<geometry_msgs::msg::Twist>::SharedPtr throttle_in_sub_;
    rclcpp::Subscription<geometry_msgs::msg::Twist>::SharedPtr brake_in_sub_;
    rclcpp::Subscription<geometry_msgs::msg::Twist>::SharedPtr steering_in_sub_;

};

int main(int argc, char** argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<ArbiterNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
