#include<iostream>

using namespace std;

int fibonacci(int n){
    if(n <= 2)
        return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){

    cout << "N = ";
    int n;
    cin >> n;

    cout << endl;
    cout << "Fibonacci de " << n << " es: " << fibonacci(n) << endl;
    
    return 0;
}