#include "car.h"
#include <iostream>
using namespace std;

void Car::printData() {
    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;
    cout << "Year Model: " << yearModel << endl;
}

void Car::setBrand(string b) {
    brand = b;
}

void Car::setModel(string m) {
    model = m;
}

void Car::setYearModel(int y) {
    yearModel = y;
}
