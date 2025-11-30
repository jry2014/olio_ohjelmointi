#ifndef CAR_H
#define CAR_H

#include "Engine.h"
#include "Wheel.h"
#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    Engine engine;
    Wheel wheels[4];
    string model;
    string brand;

public:
    Car(string b, string m) : brand(b), model(m) {}

    void setEngine() {
        engine.setHorsepower(150);
        engine.setDisplacement(2.0);
    }

    void setWheels() {
        for(int i = 0; i < 4; i++) {
            wheels[i].setSize(17);
            wheels[i].setType("kesärengas");
        }
    }

    void printDetails() {
        cout << "Car brand: " << brand << endl;
        cout << "Car model: " << model << endl;
        cout << "Engine horsepower: " << engine.getHorsepower() << endl;
        cout << "Engine displacement: " << engine.getDisplacement() << " L" << endl;

        for(int i = 0; i < 4; i++) {
            cout << "Wheel " << i + 1 << ": size " << wheels[i].getSize() 
                 << ", type " << wheels[i].getType() << endl;
        }
    }
};

#endif
