#include <iostream>
using namespace std;
class test
{
public:
    int a;
    void display()
    {
        cout << "display accessed";
    }
};
int main()
{

    void (test::*pDisplay)() = &test::display;
    int test::*pa = &test::a;
    test t;
    t.*pa = 12;
    cout << "a is " << t.*pa << endl;
    (t.*pDisplay)();
}