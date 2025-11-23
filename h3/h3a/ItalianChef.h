// ItalianChef.h
#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "Chef.h"
#include <iostream>
using namespace std;

class ItalianChef : public Chef {
public:
    ItalianChef(string n) : Chef(n) {
        cout << "ItalianChef " << name << " konstruktori" << endl;
    }

    ~ItalianChef() {
        cout << "ItalianChef " << name << " destruktori" << endl;
    }

    string getName() {
        return name;
    }

    void makePasta() {
        cout << "Chef " << name << " makes pasta" << endl;
    }
};

#endif
