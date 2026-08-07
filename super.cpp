#include <iostream>
using namespace std;

class Super {
public:
    void showSuper() {
         cout << "Super class\n"; 
        }
};

class Base1 : public Super {
public:
    void showBase1() { 
        cout << "Base1 class\n"; 
    }
};

class Base2 : public Super {
public:
    void showBase2() { 
        cout << "Base2 class\n"; 
    }
};

class SubBase : public Base1, public Base2 {
public:
    void showSubBase() { 
        cout << "SubBase class\n"; 
    }
};

int main() {
    SubBase obj;
    obj.showSubBase();
    obj.Base1::showSuper();
    obj.showBase1();
    obj.showBase2();
    return 0;
}