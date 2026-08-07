#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing Shape" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

class Box : public Shape {
public:
    void draw() override {
        cout << "Drawing Box" << endl;
    }
};

class Triangle : public Shape {
public:
    void draw() override {
        cout << "Drawing Triangle" << endl;
    }
};

int main() {
    Shape* s;
    Circle c; Box b; Triangle t;

    s = &c; s->draw();
    s = &b; s->draw();
    s = &t; s->draw();

    return 0;
}