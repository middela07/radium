#ifndef PID_CONTROLLER_H
#define PID_CONTROLLER_H

class PIDController {
private:
    float kp, ki, kd;
    int prev_error, integral;

public:
    PIDController(float p, float i, float d);
    int compute(int error);
};

#endif
