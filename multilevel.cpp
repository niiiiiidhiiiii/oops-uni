#include <iostream>
using namespace std;

class Club {
public:
    int ID_NO;
    string name;

    void Info() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Welcome to club!" << endl;
    }
};

class Head : public Club {
public:
    void HName() {
        cout << "Head of the Club: " << name << endl;
    }
};

class members : public Head {
public:
    void gm() {
        cout << "The rest are our members!!" << endl;
    }
};

int main() {
    members m;
    m.Info();
    m.HName();
    m.gm();

    return 0;
}