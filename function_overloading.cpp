#include <iostream>
using namespace std;
float area(int len, int bred)
{
    return len * bred / 2;
}
float area(int rad)
{
    return 3.14 * rad * rad;
}
int main()
{
    int ch;
    cout << "enter 1 for triangle and 2 for circle";
    cin >> ch;
    switch (ch)
    {
    case 1:
        int base, height;
        cout << "enter base and height of triangle";
        cin >> base >> height;
        cout << "are of triangle is " << area(base, height);
        break;
    case 2:
        int rad;
        cout << "enter ardius of the circle";
        cin >> rad;
        cout << "area of circle is " << area(rad);
        break;
    default:
        cout << "Invalid input";
    }
}
