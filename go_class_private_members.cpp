#include <iostream>
using namespace std;
class Go
{
private:
    int a;
    int b;

public:
    Go(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "first: " << a << "second: " << b;
    }
};

int main()
{
    int a, b;
    cin >> a >> b;
    Go g1(a, b);
    g1.display();
}