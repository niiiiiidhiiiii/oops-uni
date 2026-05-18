#include <iostream>
using namespace std;

class shape {
public:
	void virtual draw() {
		cout << "We are drawing a shape";
	}
};

class circle : public shape {
public:
	void draw() override {
		cout << "The shape is circle"<<endl;
	}
};

class rectangle : public shape {
public:
	void draw()  override {
		cout << "The shape is rectangle"<<endl;
	}
};

class triangle : public shape {
public:
	void draw() override {
		cout << "The shape is triangle"<<endl;

	}
};

int main() {
	shape s;
	shape* s1 = new circle();
	shape* s2 = new rectangle();
	shape* s3 = new triangle();

	s.draw();
	s1->draw();
	s2->draw();
	s3->draw();

	return 0;
}