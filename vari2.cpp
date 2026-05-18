#include <iostream>
using namespace std;
class variable {
	public:
	int a;
	void show() {
		cout << "The value of a is: " << a << endl;
	}
};	

class increase :   public variable {
	public:
	void inc() {
		a++;
	}
};

class decrease :  public variable {
	public:
	void dec() {
		a--;
	}
};

class hybrid : public increase, public decrease {
	public:
	void display() {
		cout << "The value of a is: " << a << endl;
	}
};

int main() {
	hybrid obj;
	obj.a = 10;
    obj.dec();
    obj.inc();
    obj.display();
    obj.inc();
    
	obj.show();
    

}