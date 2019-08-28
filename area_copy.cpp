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
    rectangle(const rectangle &r)
    {
        length = r.length;
        bredth = r.bredth;
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
    cin >> a >> b;
    rectangle r1(a, b);
    rectangle r2(r1);
    r2.area();
    return 0;
}