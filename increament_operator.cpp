#include <iostream>
using namespace std;
class number
{

public:
    int n;
    number(int a)
    {
        n = a;
    }
    void operator++()
    {
        this->n++;
    }
};
int main()
{
    int a;
    cin >> a;
    number n(a);
    ++n;
    cout << n.n;
}