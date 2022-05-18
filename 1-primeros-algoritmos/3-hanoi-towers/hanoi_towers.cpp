#include<iostream>

using namespace std;


void hanoi_towers(int n, char origin, char auxiliar, char destination){

    if(n == 1){
        cout << "Mover disco de " << origin << " a " << destination << endl;
    }else{
        hanoi_towers(n-1, origin, destination, auxiliar);
        cout << "Mover disco de " << origin << " a " << destination << endl;
        hanoi_towers(n-1, auxiliar, origin, destination);
    }
}


int main(){

    cout << "N = ";
    int n;
    cin >> n;

    cout << endl;
    hanoi_towers(n, 'A', 'B', 'C');
    
    return 0;
}