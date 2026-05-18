#include <iostream>
using namespace std;
int main() {
	int a, b;

	a = 2;
	b = 3;

	cout << "Before swap: " << a   << "b = "  << b;

	int temp;
	temp = a;
	a = b;
	b = temp;

	cout << "After swap:" << a   << "b = " << b;

}