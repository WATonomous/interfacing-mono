#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"


typedef struct twist_literal{
    uint32_t linear;
    uint32_t angular;
} twist_literal;


typedef twist_literal* twist_literal_p;