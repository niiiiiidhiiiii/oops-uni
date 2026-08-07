#include <iostream>
using namespace std;

class person {
public:
    void display() {
        cout << "I am a person" << endl;
    }
};

class student : public person {
public:
    void show() {
        cout << "I am a student" << endl;
    }
};

class graduate : public student {
public:
    void info() {
  cout << "Yes" << endl;
    }
};

int main() {
    graduate g;
    g.display(); 
    g.show();     
    g.info();    
    return 0;
}