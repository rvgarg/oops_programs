#include <iostream>
using namespace std;
class rectangle
{
    int length, bredth, area_i;

public:
    rectangle(int a, int b)
    {
        length = a;
        bredth = b;
    }
    void area()
    {
        area_i = length * bredth;
        cout << "area : " << area_i;
    }
};
int main()
{
    int a, b;
    cout << "enter length and bredth";
    cin >> a >> b;
    rectangle r(a, b);
    r.area();
}