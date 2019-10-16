#include <fstream>
#include <iostream>
using namespace std;
int main()
{
    ifstream fi;
    string name1, name2, line;
    cout << "enter name with extension of first file";
    cin >> name1;
    cout << "enter name with extension of second file";
    cin >> name2;
    ofstream fo("output.txt");
    fi.open(name1);
    while (!fi.eof())
    {
        getline(fi, line);
        fo << line << endl;
    }
    fi.close();
    fi.open(name2);
    while (!fi.eof())
    {
        getline(fi, line);
        fo << line << endl;
    }
    fi.close();
    fo.close();
    fi.open("output.txt");
    while (!fi.eof())
    {
        getline(fi, line);
        cout << line << endl;
    }
}