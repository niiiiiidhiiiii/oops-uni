

#include <iostream>
using namespace std;

int main(){
    int year;
    cout<<"Enter the year: ";
    cin>>year;

    /*if (year %4==0 && year%100 != 0){
        cout<<"It's a leap year"<<endl;
    }

    else{
        cout<<"It's not a leap year~";
    }*/

    (year % 4 == 0) && (year != 0) ? cout<<"leap year."<<endl : cout<<"not a leap year";

    
    return 0;
}
