#include <iostream>
using namespace std;
int main()
{
    int height, base;
    double area;
    cout << "enter height ";
    cin >> height;
    cout << "enter base ";
    cin >> base;
    area = (base * height) / 2;
    cout << endl
         << "area is " << area;
}