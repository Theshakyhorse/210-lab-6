// comsc-210 | Lab 6 | Alexander Sierra
#include <iostream>
using namespace std;

const int SIZE = 5;
void enterArrayData(double *);

int main() {
    double *dptr = nullptr;
    dptr = new double[SIZE];
    
    return 0;
}

void enterArrayData(double *Arr){
    double inp;
    cout << "Data entry for the array:" << endl;
    for(int i = 0; i < SIZE; i++){
        cout << "   > Element " << i << ": ";
        cin >> inp;
        Arr[i] = inp;
        cout << endl;
    }
    cout << "Data entry complete." << endl;
}