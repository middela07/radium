#include <iostream>
#include "MotorControl.h"
#include "SensorInterface.h"
#include "LineFollower.h"
#include "PIDController.h"

MotorControl motorControl;
SensorInterface sensors;
LineFollower lineFollower;
PIDController pid(1.0, 0.1, 0.05);

int main() {
    std::cout << "Starting Radium Robot...\n";
    motorControl.init();
    sensors.init();

    while (true) {
        int sensorData[4];
        sensors.readSensors(sensorData);

        int position = lineFollower.detectLine(sensorData);
        int error = position - 512;  // Assuming center is 512
        int correction = pid.compute(error);

        motorControl.adjustSpeed(correction);
    }

    return 0;
}
