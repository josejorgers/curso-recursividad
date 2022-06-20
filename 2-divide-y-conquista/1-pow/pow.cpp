#include<iostream>

using namespace std;

int pow(double base, int exp){
    if(exp == 0)
        return 1;
    if(exp % 2 == 0){
        double aux = pow(base, exp/2);
        return aux * aux;
    }
    return base * pow(base, exp-1);
}

int main(){

    cout << "base = ";
    int base;
    cin >> base;
    cout << endl;

    cout << "exp = ";
    int exp;
    cin >> exp;
    cout << endl;

    cout << base << " elevado a la " << exp << " es igual a: " << pow(base, exp) << endl;
    
    return 0;
}