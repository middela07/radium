#include "LineFollower.h"

int LineFollower::detectLine(int sensorData[4]) {
    int weight[4] = {-1000, -500, 500, 1000};  // Left to right
    int position = 0, sum = 0;

    for (int i = 0; i < 4; i++) {
        position += sensorData[i] * weight[i];
        sum += sensorData[i];
    }

    return (sum == 0) ? 512 : position / sum;
}
