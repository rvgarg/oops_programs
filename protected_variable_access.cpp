#include <iostream>
using namespace std;
class parent
{
protected:
    int a;
};
class child : public parent
{
public:
    child(int a)
    {
        this->a = a;
    }
    void print_child()
    {
        cout << a;
    }
};
int main()
{
    int a;
    cin >> a;
    child c = child(a);
    c.print_child();
}