#include <iostream>
using namespace std;
class base
{
protected:
    int x, y;

public:
    virtual void show() = 0;
    virtual void putVal(int a, int b) = 0;
};
class derived : public base
{
public:
    void putVal(int a, int b)
    {
        x = a;
        y = b;
    }
    void show()
    {
        cout << "x is :" << x << "y is :" << y;
    }
};
int main()
{
    int a, b;
    derived d;
    cin >> a >> b;
    d.putVal(a, b);
    d.show();
}