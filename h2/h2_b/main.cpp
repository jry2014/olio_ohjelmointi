#include "Car.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Luodaan vektori pinoon
    vector<Car> carList;
    
    // Lisätään kolme autoa listaan
    carList.push_back(Car("Toyota", "Corolla", 2020));
    carList.push_back(Car("Volkswagen", "Golf", 2019));
    carList.push_back(Car("Ford", "Mustang", 2022));
    
    // Tulostetaan toisen alkion tiedot (indeksi 1)
    cout << "Toisen alkion tiedot:" << endl;
    carList[1].printData();
    
    // Tulostetaan kaikkien autojen tiedot for-silmukalla
    cout << "Kaikkien autojen tiedot:" << endl;
    for(int i = 0; i < carList.size(); i++) {
        carList[i].printData();
    }
    
    return 0;
}
