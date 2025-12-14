#pragma once
#include <string>
#include "ClassB.h"
using namespace std;

class ClassA2
{
private:
    ClassB &refB;
public:
    ClassA2(ClassB&);
    string getBinfo();
    void setBinfo(string);
};
