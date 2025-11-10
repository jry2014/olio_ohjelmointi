#include "car.h"
#include "rectangle.h"
#include "student.h"
#include <iostream>
#include <memory>
using namespace std;

int main() {
    cout << "=== CAR ===" << endl;
    Car myCar;

    myCar.setBrand("Toyota");
    myCar.setModel("Corolla");
    myCar.setYearModel(2023);


    myCar.printData();
    cout << endl;


    cout << "=== RECTANGLE ===" << endl;

    Rectangle* myRectangle = new Rectangle();


    myRectangle->setWidth(5.0);
    myRectangle->setHeight(3.5);

    cout << "Width: " << 5.0 << endl;
    cout << "Height: " << 3.5 << endl;
    cout << "Area: " << myRectangle->getArea() << endl;
    cout << "Circumference: " << myRectangle->getCircum() << endl;

    delete myRectangle;
    myRectangle = nullptr;
    cout << endl;

    cout << "=== STUDENT ===" << endl;

    unique_ptr<Student> myStudent = make_unique<Student>();


    myStudent->setName("Matti Meikalainen");
    myStudent->setStudentNumber(12345);
    myStudent->setAverage(4.2);


    cout << "Name: " << myStudent->getName() << endl;
    cout << "Student Number: " << myStudent->getStudentNumber() << endl;
    cout << "Average: " << myStudent->getAverage() << endl;


    return 0;
}
