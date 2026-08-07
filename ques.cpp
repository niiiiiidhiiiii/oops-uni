#include <iostream>
using namespace std;

//Create two classes:
/*▶ Student
▶ Sports
▶ Create a class Result inheriting both.
▶ Display student marks and sports score.*/

class Student {
public:
    string name;
    int marks;

    void getStudentDetails() {
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter student marks: ";
        cin >> marks;
    }
};

class Sports {
public:
    int score;

    void getSportsDetails() {
        cout << "Enter sports score: ";
        cin >> score;
    }
};

class Result : public Student, public Sports {
public: 
    void displayResult() {
        cout << "Student Name: " << name << endl;
        cout << "Student Marks: " << marks << endl;
        cout << "Sports Score: " << score << endl;
    }
};

int main() {
    Result result;
    result.getStudentDetails();
    result.getSportsDetails();
    result.displayResult();

    return 0;
}
