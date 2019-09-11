#include <iostream>
using namespace std;
class base
{
    int x, y;

public:
    base(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    base() {}
    void show()
    {
        cout << "x:" << x << endl
             << "y:" << y;
    }
};
class derived : public base
{
public:
    derived(int x, int y)
    {
        base b(x, y);
        b.show();
    }
};
int main()
{
    int x, y;
    cin >> x >> y;
    derived d(x, y);
}