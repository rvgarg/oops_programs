#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    string name;
    cout << "enter name of file ";
    cin >> name;
    ifstream fiil;
    fiil.open(name);
    string line, fil;
    while (!fiil.eof())
    {
        getline(fiil, line);
        cout << line << endl;
        fil.append(line).append("\n");
    }
    fiil.close();
    string search, replace;
    cout << "enter expression to replace ";
    getline(cin, search);
    size_t ind = fil.find(search);
    if (ind == string::npos)
    {
        cout << "not found" << endl;
        return 0;
    }
    cout << "enter what you want to put";
    getline(cin, replace);
    fil.replace(ind, string(search).length(), replace);
    cout << fil;
    ofstream file(name);
    file << fil;
    cout << fil;
}