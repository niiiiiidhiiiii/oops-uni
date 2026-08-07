#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, num, temp, digit, sum, digits;
    cout << "Enter a number";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
         num = i;
         temp = num;
         digit = 0;
         sum = 0;
    

    while (temp > 0) {
            digit++;
            temp /= 10;
        }

    temp = num;

    while (temp>0){
     digits = temp%10;
    sum+= pow(digits, digit);
    temp /= 10;
    }

    if(sum == num){
        cout<< num << " ";
    }
}
    return 0;
}