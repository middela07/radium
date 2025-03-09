#include "MotorControl.h"
#include <iostream>

void MotorControl::init() {
    std::cout << "Initializing Motors...\n";
}

void MotorControl::adjustSpeed(int correction) {
    std::cout << "Adjusting speed by: " << correction << "\n";
}

void MotorControl::moveForward() {
    std::cout << "Moving forward\n";
}

void MotorControl::turnLeft() {
    std::cout << "Turning left\n";
}

void MotorControl::turnRight() {
    std::cout << "Turning right\n";
}

void MotorControl::rotate(int angle) {
    if (angle > 0) {
        std::cout << "Turning right by angle: " << angle << "\n";
        turnRight(); // Call the method to turn right
    } else if (angle < 0) {
        std::cout << "Turning left by angle: " << -angle << "\n";
        turnLeft(); // Call the method to turn left
    } else {
        std::cout << "No rotation needed\n";
    }
}
