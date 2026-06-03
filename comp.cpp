#include <iostream>
using namespace std;

class Engine{
public:
     int hp;

   
};

class Car
{ public:
    Engine engine;
    int speed;
};

int main()
{
    Car car;
    car.speed = 100; 
    car.engine.hp = 200;
    cout<< "Car speed: " << car.speed << " km/h" << endl;
    cout<< "Engine horsepower: " << car.engine.hp << " hp" << endl;
     
    return 0;
}