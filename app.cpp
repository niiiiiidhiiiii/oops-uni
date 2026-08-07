#include <fstream>
#include <iostream>
using namespace std;

int main(){
    fstream file;
    ifstream ifile{ "Sample.txt" };
    ofstream ofile{ "s2.txt", std::ios_base::app };
    if (!ifile.is_open())
    {
        cerr << "Uh oh, Sample.txt could not be opened for reading!\n";
        return 1;
    }
    if (!ofile.is_open()) //checks if file is open or not.
    {
        cerr << "Uh oh, s2.txt could not be opened for writing!\n";
        return 1;
    }

    ofile<< ifile.rdbuf(); //buffer~ it basically copy the content of file a to file b.

    cout<< "File copied successfully!"<<endl;

    ifile.close();
    ofile.close();

    return 0;
}