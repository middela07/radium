#include "SensorInterface.h"
#include <iostream>

void SensorInterface::init() {
    std::cout << "Initializing Sensors...\n";
}

void SensorInterface::readSensors(int sensorData[4]) {
    for (int i = 0; i < 4; i++) {
        sensorData[i] = rand() % 2;  // Simulated sensor readings
    }
}
