#ifndef CHEF_H
#define CHEF_H

#include <iostream>
using namespace std;

class Chef {
protected:
    string name;

public:
    Chef(string n) : name(n) {
        cout << "Chef " << name << " konstruktori" << endl;
    }

    ~Chef() {
        cout << "Chef " << name << " destruktori" << endl;
    }

    void makeSalad() {
        cout << "Chef " << name << " makes salad" << endl;
    }

    void makeSoup() {
        cout << "Chef " << name << " makes soup" << endl;
    }
};

#endif
