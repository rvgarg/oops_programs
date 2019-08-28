#include <iostream>
using namespace std;
inline int max1(int a, int b, int c)
{
    if (a > b)
    {
        if (a > c)
        {
            return a;
        }
        else
        {
            return c;
        }
    }
    else
    {
        if (b > c)
        {
            return b;
        }
        else
        {
            return c;
        }
    }
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << "greatest no : " << max1(a, b, c);
}