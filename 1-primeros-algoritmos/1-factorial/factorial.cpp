#include<iostream>

using namespace std;

int factorial(int n){
    if(n < 1)
        return 1;
    return n * factorial(n-1);
}

int main(){

    cout << "N = ";
    int n = 4;
    cin >> n;
    cout << endl;

    cout << n << "! = " << factorial(n) << endl;
    return 0;
}