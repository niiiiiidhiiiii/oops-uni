#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    try {
        if (b == 0)
            throw "Division by zero error!";  // user-defined exception
        cout << "Result = " << a / b << endl;
    }
    catch (const char* msg) {   // catch block
        cout << "Exception caught: " << msg << endl;
    }

    cout << "Program continues..." << endl;
    return 0;
}
