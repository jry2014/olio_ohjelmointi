#ifndef CAR_H
#define CAR_H

#include "Engine.h"
#include "Wheel.h"
#include <string>

class Car {
private:
    Engine engine;
    Wheel wheels[4];
    string model;
    string brand;

public:
    Car(string b, string m);

    void setEngine();
    void setWheels();
    void printDetails();
};

#endif
