#include <iostream>
using namespace std;
class Bank{
public:
int accno;
string name;
int code;

 void details(){
    cout<<"enter details: "<< endl;
    cin>> accno;
    cin>> name;
 }
};

class bank2{
private:
void pvtdetail(){
    cout<<"Enter Detail: "<< endl;
    cin>> name;
    cin>> accno;
    cin>> code;

 } 
};

class user: public bank, public bank2{
    void userdetails(){
        cout<<"Click Any Key to continure: ";
    }
}

int main(){
    user obj;
    obj.userdetails();
    obj.pvtdetails();
    obj.details();

    return 0;
}