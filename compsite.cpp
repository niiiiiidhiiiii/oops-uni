#include <iostream>
using namespace std;
class base{
public:
	void tehe() {
		cout<< "Base it is~";
    }
};

class comp{
    public:
    void hehe(){
        base b;
        b.tehe();
    }
};

int main(){
    comp c;
    c.hehe();
    return 0;
}

