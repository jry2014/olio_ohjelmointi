#ifndef WHEEL_H
#define WHEEL_H

#include <string>
using namespace std;

class Wheel {
private:
    int size;
    string type;

public:
    Wheel() : size(0), type("") {}

    Wheel(int s, string t) : size(s), type(t) {}

    void setSize(int s) {
        size = s;
    }

    int getSize() const {
        return size;
    }

    void setType(string t) {
        type = t;
    }

    string getType() const {
        return type;
    }
};

#endif
