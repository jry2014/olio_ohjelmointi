#include "Wheel.h"
using namespace std;
Wheel::Wheel() : size(0), type("") {}

Wheel::Wheel(int s, string t) : size(s), type(t) {}

void Wheel::setSize(int s) {
    size = s;
}

int Wheel::getSize() const {
    return size;
}

void Wheel::setType(string t) {
    type = t;
}

string Wheel::getType() const {
    return type;
}
