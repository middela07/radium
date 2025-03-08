#ifndef MOTOR_CONTROL_H
#define MOTOR_CONTROL_H

class MotorControl {
public:
    void init();
    void adjustSpeed(int correction);
    void moveForward();
    void turnLeft();
    void turnRight();
    void stop();
};

#endif
