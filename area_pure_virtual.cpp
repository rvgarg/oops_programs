#include <iostream>
using namespace std;
class area
{
public:
    virtual void Area(double len, double bred) = 0;
    virtual void Area(double side) = 0;
};
class rectangle : public area
{
public:
    void Area(double side) {}
    void Area(double len, double bred)
    {
        double area;
        area = len * bred;
        cout << "area of rectangle is " << area << endl;
    }
};
class square : public area
{
public:
    void Area(double side)
    {
        double area;
        area = side * side;
        cout << "area of square is " << area << endl;
    }
    void Area(double len, double bred) {}
};
int main()
{
    double len, bred, side;
    cout << "enter length and bredth";
    cin >> len >> bred;
    rectangle r;
    r.Area(len, bred);
    cout << "enter side ";
    cin >> side;
    square s;
    s.Area(side);
}