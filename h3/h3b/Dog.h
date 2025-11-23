#ifndef DOG_H
#define DOG_H

#include "Animal.h"
#include <iostream>
using namespace std;

class Dog : public Animal {
public:
    Dog() {
        cout << "Dog created" << endl;
    }

    ~Dog() {
        cout << "Dog destroyed" << endl;
    }

    void callOut() override {
        cout << "Koira haukkuu!" << endl;
    }
};

#endif
