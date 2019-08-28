#include <iostream>
using namespace std;
class comp
{
    int real, imaginary;

public:
    comp(int a, int b)
    {
        real = a;
        imaginary = b;
    }
    comp operator-(comp &c)
    {
        comp c1(this->real - c.real, this->imaginary - c.imaginary);
        return c1;
    }
    void display()
    {
        cout << "real part :" << real << "imaginary part " << imaginary;
    }
};
int main()
{
    int c1r, c1i, c2r, c2i;
    cout << "enter 4 numbers";
    cin >> c1r >> c1i >> c2r >> c2i;
    comp c1(c1r, c1i), c2(c2r, c2i);
    comp c3 = c1 - c2;
    c3.display();
}