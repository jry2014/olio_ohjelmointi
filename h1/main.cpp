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
        cout << "virhe:::;" << endl;
    }
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
}