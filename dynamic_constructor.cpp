#include <iostream>
using namespace std;
class test
{
    string str;
    char *ch;

public:
    test(string s)
    {
        str = s;
        ch = new char[6];
    }
    void display()
    {
        cout << "entered string is : " << str;
    }
};
int main()
{
    string s;
    cin >> s;
    test *t = new test(s);
    t->display();
}