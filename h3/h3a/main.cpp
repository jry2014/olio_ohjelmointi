#include "Chef.h"
#include "ItalianChef.h"
using namespace std;
int main() {
    Chef gordon("Gordon Ramsay");
    gordon.makeSalad();
    gordon.makeSoup();

    ItalianChef anthony("Anthony Bourdain");
    anthony.makeSalad();
    anthony.makeSoup();
    anthony.makePasta();
    cout << anthony.getName() << endl;

    return 0;
}
