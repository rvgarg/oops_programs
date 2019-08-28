#include <iostream>
using namespace std;
int checkEven(int n)
{
    if (n == 0)
    {
        cout << "even";
        return 0;
    }
    if (n == 1)
    {
        cout << "odd";
        return 0;
    }
    checkEven(n - 2);
}
int main()
{
    int num;
    cin >> num;
    checkEven(num);
}