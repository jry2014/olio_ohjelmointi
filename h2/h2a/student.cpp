#include "student.h"

// Setterit
void Student::setName(string n) {
    name = n;
}

void Student::setStudentNumber(int num) {
    studentNumber = num;
}

void Student::setAverage(double avg) {
    average = avg;
}

// Getterit
string Student::getName() {
    return name;
}

int Student::getStudentNumber() {
    return studentNumber;
}

double Student::getAverage() {
    return average;
}
