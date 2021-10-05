#include <iostream>
#include <System.h>
#include <Eigen/Dense>

int main(){
    std::cout << "Hello world" << std::endl;
    Eigen::Vector2d v{1,2};

    ORB_SLAM3::Verbose s;
    std::cout << v << std::endl;
    return 0;
}