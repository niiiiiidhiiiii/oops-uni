#include <iostream>
using namespace std;


class Animal {
public:
    void sound() {
        cout << "Animal makes sound" << "\n";
    }
};


class Mammal : virtual public Animal {
public:
    void walk() {
        cout << "Mammal walks" << "\n";
    }
};

class Bird : virtual public Animal {
public:
    void fly() {
        cout << "Bird flies" << "\n";
    }
};


class Bat : public Mammal, public Bird {
public:
    void identity() {
        cout << "I am a Bat" << "\n";
    }
};

int main() {
    Bat b1;
    b1.sound();
    b1.fly();
    b1.walk();
    b1.identity();
    return 0;
}