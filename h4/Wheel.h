#ifndef WHEEL_H
#define WHEEL_H

#include <string>

using namespace std;

class Wheel {
private:
    int size;
    string type;

public:
    Wheel();
    Wheel(int s, string t);

    void setSize(int s);
    int getSize() const;

    void setType(string t);
    string getType() const;
};

#endif
