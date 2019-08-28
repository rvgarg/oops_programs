#include <iostream>
using namespace std;
class test
{
    int *p;

public:
    test()
    {
        cout << "Constructor is called" << endl;
        p = new int[4];
    }
    ~test()
    {
        cout << "destructor is called" << endl;
        delete[] p;
    }
};
int main()
{
    test t;
    return 0;
}