/* #include <iostream>
using namespace std;

class rectangle{
int lenght, breadth;
public:
void getparameter()
{
    cout<<"Enter the length and breadth of the rectangle: ";
    cin>>lenght>>breadth;
}
void area(){
    int area=lenght*breadth;
    cout<<"Area of the rectangle is: "<<area<<endl;

}

};

int main(){
    rectangle o;
    o.getparameter();
    o.area();
    return 0;
} */


#include <iostream>
using namespace std;

class BankAcc{
int accno, balance;
public:
 void getdetails(){
    cout<<"Enter Accountnumber"<<accno;
    cin>>accno;
 }

    void display(){
        cout<<"Account number: "<<accno<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
};