/*a) Write a class named Point3d. The class should contain:

Three private member variables of type int named m_x, m_y, and m_z;
A public member function named setValues() that allows you to set values for m_x, m_y, and m_z.
A public member function named print() that prints the Point in the following format: <m_x, m_y, m_z>*/

#include <iostream>
using namespace std;

class Point3d{
    private:
    double m_x, m_y, m_z;

    public: 
    void setValues(double x, double y, double z) {
        m_x = x;
        m_y = y;
        m_z = z;
    }
    void print() {
        cout << "<" << m_x << ", " << m_y << ", " << m_z << ">" << endl;
    }

    void isequal(Point3d p) {
        if (m_x == p.m_x && m_y == p.m_y && m_z == p.m_z) {
            cout << "The points are equal." << endl;
        } else {
            cout << "The points are not equal." << endl;
        }
    }
};
int main() {
    Point3d p;
    p.setValues(23, 24, 26);
    p.print();
}