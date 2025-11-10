#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student {
private:
    string name;
    int studentNumber;
    double average;

public:
    // Setterit
    void setName(string n);
    void setStudentNumber(int num);
    void setAverage(double avg);

    // Getterit
    string getName();
    int getStudentNumber();
    double getAverage();
};

#endif
