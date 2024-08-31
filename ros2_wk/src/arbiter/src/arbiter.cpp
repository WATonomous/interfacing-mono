#include "rclcpp/rclcpp.hpp"
class ArbiterNode : public rclcpp::Node 

{
public:
    ArbiterNode() : Node("arbiter"){

    }
private:
};

int main(int argc, char** argv){
    rclcpp::init(argc, argv);
    auto node = std::make_shared<ArbiterNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}