#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "geometry_msgs/msg/twist.hpp"
//#include "shared_msgs/msg/CANReqMsg.hpp"

class MuxNode : public rclcpp::Node
{
public:
    MuxNode() : Node("mux"), selected_input_(1)
    {
        this->declare_parameter<int>("select_value", 1);
        this->get_parameter("select_value", selected_input_);

        // Subscribers
        input1_sub_ = this->create_subscription<geometry_msgs::msg::Twist>(
            "input1", 10, std::bind(&MuxNode::input1_callback, this, std::placeholders::_1));
        input2_sub_ = this->create_subscription<geometry_msgs::msg::Twist>(
            "input2", 10, std::bind(&MuxNode::input2_callback, this, std::placeholders::_1));
        input3_sub_ = this->create_subscription<geometry_msgs::msg::Twist>(
            "input3", 10, std::bind(&MuxNode::input3_callback, this, std::placeholders::_1));

        output_pub_ = this->create_publisher<geometry_msgs::msg::Twist>("arbiter_in", 10);

        param_callback_handle_ = this->add_on_set_parameters_callback(
            std::bind(&MuxNode::param_callback, this, std::placeholders::_1));
    }

private:
    void input1_callback(const geometry_msgs::msg::Twist::SharedPtr msg)
    {
        if (selected_input_ == 1)
        {
            output_pub_->publish(*msg);
        }
    }

    void input2_callback(const geometry_msgs::msg::Twist::SharedPtr msg)
    {
        if (selected_input_ == 2)
        {
            output_pub_->publish(*msg);
        }
    }

    void input3_callback(const geometry_msgs::msg::Twist::SharedPtr msg)
    {
        if (selected_input_ == 3)
        {
            output_pub_->publish(*msg);
        }
    }

    rcl_interfaces::msg::SetParametersResult param_callback(const std::vector<rclcpp::Parameter> &params)
    {
        for (const auto &param : params)
        {
            if (param.get_name() == "select_value" && param.get_type() == rclcpp::ParameterType::PARAMETER_INTEGER)
            {
                selected_input_ = param.as_int();
                RCLCPP_INFO(this->get_logger(), "Select value changed to: %d", selected_input_);
            }
        }
        rcl_interfaces::msg::SetParametersResult result;
        result.successful = true;
        return result;
    }

    rclcpp::Subscription<geometry_msgs::msg::Twist>::SharedPtr input1_sub_;
    rclcpp::Subscription<geometry_msgs::msg::Twist>::SharedPtr input2_sub_;
    rclcpp::Subscription<geometry_msgs::msg::Twist>::SharedPtr input3_sub_;
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr output_pub_;
    rclcpp::node_interfaces::OnSetParametersCallbackHandle::SharedPtr param_callback_handle_;

    int selected_input_;
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<MuxNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}


// TO CHANGE PARAM: WRITE TO CONSOLE: `ros2 param set /mux_node select_value n` where n = [1,2,3] is the channel we want to set the mux to
/*
    therefore, when joystick writes, we need to have an input s.t we assert a flag and write this command to the console
    I believe a topic would suffice for this. When we see that an start message comes from a higher priority entity,
    we can just set the mux to that until it send a deassert. At which point, we wait for  anotheer node to write 
    (more than likely will be autonomy). In the case where autonomy isnt connect (during inital testing), the mux will 
    simply be dormant until the joystick reasserts, since the autonomy node wont be sending anything
*/