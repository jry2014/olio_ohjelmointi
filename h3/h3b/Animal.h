#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
using namespace std;

class Animal {
public:
    Animal() {
        cout << "Animal created" << endl;
    }

    virtual ~Animal() {
        cout << "Animal destroyed" << endl;
    }

    virtual void callOut() {
        cout << "Eläin ääntelee." << endl;
    }
};

#endif
