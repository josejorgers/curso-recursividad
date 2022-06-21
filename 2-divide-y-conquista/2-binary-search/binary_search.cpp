#include<iostream>

using namespace std;

int binary_search(double array[], double n, int a, int b){
    if(a > b)
        return -1;
    
    int m = (a + b) / 2;

    if(array[m] == n)
        return m;

    if(array[m] > n)
        return binary_search(array, n, a, m-1);
    
    return binary_search(array, n, m+1, b);
}

int search(double array[], double n, int length){

    return binary_search(array, n, 0, length-1);
}

int main(){

    double array[] = {1, 2, 3, 4, 5, 6, 7};

    cout << "El numero " << 4 << " se encuentra en la posicion " << search(array, 4, 7) << endl;

    return 0;
}