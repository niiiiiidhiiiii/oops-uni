#include <iostream>
using namespace std;

class Student {
protected:
    double fee;
public: 
    virtual void getfee() = 0; 
};

class ug : public Student {
public:
    void getfee() override {
        cout << "5000 dollars, chatttt" << endl; 
    }
};

class grad : public Student {
public:
    int credits;
    void getfee() override {
        cout << "Enter number of credits: ";
        cin >> credits;
        fee = credits * 50;
        cout << "Fee is: " << fee << endl;
    }
};

int main() {
    Student* s;

    ug u;
    grad g;

    s = &u;
    s->getfee();

    s = &g;
    s->getfee();

    return 0;
}
