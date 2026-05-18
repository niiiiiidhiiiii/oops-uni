#include <iostream>
using namespace std;
int main() {
    int a, b;
    a = 3;
    b = 5;

    cout<< "Before the swap" << " ,A = " << a << " ,B =" << b;

    a = a + b;
    b =  a - b;
    a = a - b;

    cout<< "after sawp: "<< "a= "<< a << " ,b = " << b<< endl;
    return 0;
}