#include <iostream>
using namespace std;

class A {
public:
    void show() {
    cout << "Class A\n";
    }
};

class B : virtual public A {
public:
    void see(){
        cout<<"Class B hehe"<<endl;
    }
};
class C : virtual public A {
public:
    void bee(){
        cout<< "class C wheheh"<<endl;
    }
};

class D : public B, public C {};

int main() {
    D obj;
    obj.show(); 
    obj.see();
    obj.bee(); 
}