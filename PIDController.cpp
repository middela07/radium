#include "PIDController.h"

PIDController::PIDController(float p, float i, float d) : kp(p), ki(i), kd(d), prev_error(0), integral(0) {}

int PIDController::compute(int error) {
    integral += error;
    int derivative = error - prev_error;
    int output = kp * error + ki * integral + kd * derivative;
    prev_error = error;
    return output;
}
