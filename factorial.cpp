// #include <iostream>
// using namespace std;

// int factorial(int n)
// {

//     int num = 1;
//     for (int i = 2; i <= n; i++)
//     {
//         num = num * i;
//     }
//     return num;
// }

// int main()
// {
//     int a = 5;
//     cout << factorial(a) << endl;
// } 
// int main(){

//     int n, num;
//     num= 1;
//     cout<<"Enter a number: "<<endl;
//     cin>>n;
//     for(int i=1;i<=n;i++) {
//         num *= i;

//     }
//     cout<<"Factorial for"<<n<<"Would be "<<num;
//     return 0;
// }

#include <iostream>
#include <string>

int main()
{
    std::string name{ "nidhi" };
    std::cout << name << " has " << name.length() << " characters\n";

    return 0;
}