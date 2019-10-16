#include <fstream>
#include <iostream>
using namespace std;
int main()
{
    string name;
    cin >> name;
    ofstream fo;
    fo.open(name + ".txt");
    string inp;
    getline(cin, inp);
    while (inp != "-1")
    {
        fo << inp << endl;
        getline(cin, inp);
    }
    fo.close();
    ifstream fi(name + ".txt");
    while (!fi.eof())
    {
        getline(fi, inp);
        cout << inp << endl;
    }
    fi.close();
}