#include <iostream>
using namespace std;

int main() {

    int n, marks;
    string name;
    
    cout<<"Enter your name, dear child~"<<endl;
    cin>>name;

    cout << "Enter the total subjects: ";
    cin >> n;

    int arr[n];

    cout << "Enter marks:\n";

    int sum = 0;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        sum = sum + arr[i];
    }

    cout << "Total marks: " << sum << endl;

    marks = sum / n;

    cout << "Percentage is: " << marks << "%";

    return 0;
}
