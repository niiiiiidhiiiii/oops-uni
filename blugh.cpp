
using namespace std;
#include <iostream>

int getInt(int c)
{
	return c;
}

int main()
{
	std::cout << "Enter a single character: ";
	char c{};
	std::cin >> c;

	std::cout << "You entered '" << c << "', which has ASCII code " << getInt(c) << ".\n";

	

    char h;
    cout << "Enter a character: ";
    cin >> h;
    cout << "You entered: " << int(h) << endl; // Output the ASCII value of the character
    return 0;
}