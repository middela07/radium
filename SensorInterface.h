#ifndef SENSOR_INTERFACE_H
#define SENSOR_INTERFACE_H

class SensorInterface {
public:
    void init();
    void readSensors(int sensorData[4]);
};

#endif
