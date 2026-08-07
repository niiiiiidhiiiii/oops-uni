
#include <iostream>
using namespace std;


class Teacher{
    public:
    string name;
    string dept;
    string subject;
    double salary;

    void changeDept(string newDept){
        dept = newDept;
    }
};

int main(){
    Teacher t1;
    t1.name = "Anshi";
    t1.dept = "cse";
    t1.subject = "cse core";
    t1.salary = 25000;
    cout<<t1.dept<<endl;
    return 0;
}

