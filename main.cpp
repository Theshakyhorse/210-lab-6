// comsc-210 | Lab 6 | Alexander Sierra
#include <iostream>
using namespace std;

const int SIZE = 5;
void enterArrayData(double *);
void outputArrayData(double *);
double sumArray(double *);

int main() {
    double *dptr = nullptr;
    dptr = new double[SIZE];

    enterArrayData(dptr);
    outputArrayData(dptr);
    cout << "Sum of values: " << sumArray(dptr);

    delete [] dptr;
    return 0;
}
//populates array with user input
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
//outputs array data in nice format
void outputArrayData(double *Arr){
    cout << "Outputting array elements: ";
    for(int i = 0; i < SIZE; i++){
        cout << *(Arr + i) << " ";
    }
    cout << endl;
}
//sums array's data and returns it
double sumArray(double *Arr){
    double sum;
    for(int i = 0; i < SIZE; i++){
        sum += *(Arr + i);
    }
    return sum;
}