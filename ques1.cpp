#include <iostream>
using namespace std;

class person{
    public:
    string name;
    int age;
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
class student:public person{
    public:
    int roll_no;
    void display(){
        person::display();
        cout<<"Roll No: "<<roll_no<<endl;
    }
};

int main(){
    student s;
    s.name="John";
    s.age=20;
    s.roll_no=101;
    s.display();
    return 0;
}
