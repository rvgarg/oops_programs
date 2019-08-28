#include <iostream>
using namespace std;
class foo
{
public:
    static int count;
    foo() { count++; }
};
int foo::count = 0;
int main()
{
    foo a, b, c, d;
    cout << foo::count;
}