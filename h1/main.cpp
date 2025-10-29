# include <iostream>
using namespace std;    
void calcSum(int a,int b){
    int sum = a + b;
    cout << "Summa on:" << sum << endl;
}

void divSum (int a, int b){
    if(b != 0) {
        double div = 1.0 * a/b;
        cout << "Osamaara on:" << div << endl;
    }else{
        cout << "virhe: Nollalla ei voi jakaa" << endl;
    }
}
int retSum(int a, int b){
    return a+b;
}

float retDiv(int a, int b) {
    if(b == 0){
        throw runtime_error("jakaja ei saa olla nolla.");
    }
    return 1.0 * a / b;
}
int main(){
    int a,b;
    cout << "Luku 1" << endl;
    cin >> a;
    cout << "Luku 2" << endl;
    cin >> b;
    
    //Func
    calcSum(a,b);
    divSum(a,b);
    int sumResult = retSum(a, b);
    float divResult;

     //jos try-lohkossa nousee runtime error, hypätään catch-lohkoon
    try {
        divResult = retDiv(a,b);
        cout << a << "/" <<  b << " = " << divResult << endl;
    } catch (runtime_error& e) {
        cout<<"Error: "<< e.what()<< endl;
    }
    return 0;
}