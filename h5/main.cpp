#include <iostream>
#include "ClassB.h"
#include "ClassA1.h"
#include "ClassA2.h"
using namespace std;

int main()
{
    // OSOITIN 
    int a = 5;
    cout << "a:n arvo on: " << a << " ja osoite on: " << &a << endl;

    int *pointerA = &a;
    cout << "Pointterin osoittama osoite on: " << pointerA << endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: " << *pointerA << endl;

    // REFERENSSI
    int &refA = a;
    cout << "refA osoittaa osoitteeseen on: " << &refA << endl;
    cout << "refA:n osoittaman muistipaikan arvo on: " << refA << endl;

    int b = 6;
    pointerA = &b; 
    cout << "\nNyt pointerA osoittaa b:n osoitteeseen ja arvo on: " << *pointerA << endl;
    
    // OLIO ARGUMENTTINA

    ClassB objB;
    objB.setInfo("Olion B asettama info");

    ClassA1 objA1(objB);
    objA1.setBinfo("Olion objA1 asettama info");

    cout << "objB: " << objB.getInfo() << endl;        
    cout << "objA1: " << objA1.getBinfo() << endl;      

    // REFERENSSI ARGUMENTTINA 


    ClassB &refB = objB;
    ClassA2 objA2(refB);
    objA2.setBinfo("Olion Agr asettama info");

    cout << "objB: " << objB.getInfo() << endl;         
    cout << "objA2: " << objA2.getBinfo() << endl;

    cout << endl;
    return 0;
}
