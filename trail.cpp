#include <iostream>
using namespace std;
class a
{
public:
    int a = 5;
    void show()
    {
        cout << a;
    }
};
class b : public a
{
};
class c : public a
{
};
class d : public b, public c
{
};
int main()
{
    d a;
    a.b::a = 10;
    cout<<a.b::a;
}