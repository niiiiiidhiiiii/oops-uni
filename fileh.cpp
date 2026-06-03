#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    
    ofstream outf{ "Sample.txt" };

    
    if (!outf)
    {
       
        cerr << "Uh oh, Sample.txt could not be opened for writing!\n";
        return 1;
    }


    outf << "if you miss the train, I was on\n";
    outf << "You will know that I am gone\n";
    outf << "you can hear the whistle blow a hundred miles\n";
    outf<<endl;
    outf<< "A hundred miles, a hundred miles\n";
    outf<< "You can hear the whistle blow a hundred miles\n";
    outf<<endl;
    outf<< "Lord I'm one, Lord I'm two\n";
    outf<< "Lord I'm three, Lord I'm four\n";
    outf<< "Lord I'm five hundred miles away from my home\n";
    outf<<"From my home, from my home, from my home\n";
    outf<<"Lord I'm five hundred miles away from my home\n";
    outf<<endl;
    outf<< "Not a shirt on my back, not a penny to my name\n";
    outf<< "Lord I can't go back home this way\n";
    outf<< "This I know, this I know, Lord I can't go back home this way\n";
    outf<<endl;
    outf<<"this ole way, this ole way, Lord I can't go back home this ole way\n";
    outf<< "If you miss the train I'm on, you will know that I am gone\n";
    outf<< "You can hear the whistle blow a hundred miles\n";
    outf<<endl;
    outf<< "A hundred miles, a hundred miles\n";
    outf<< "You can hear the whistle blow a hundred miles\n";
    




    outf.close();

    return 0;

    
}

#include <fstream>
#include <iostream>
using namespace std;

int main(){
    ifstream inf{ "Sample.txt" };

    if (!inf)
    {
        cerr << "Uh oh, Sample.txt could not be opened for reading!\n";
        return 1;
    }

    string line;

    while (getline(inf, line))
        cout << line << endl;

    inf.close();

    return 0;
}

