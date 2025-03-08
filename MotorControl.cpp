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

void MotorControl::stop() {
    std::cout << "Stopping motors\n";
}
