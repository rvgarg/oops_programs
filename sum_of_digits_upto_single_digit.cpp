#include <iostream>
using namespace std;
int main()
{
    int number;
    cin >> number;
    bool flag = true;
    int sum = 0, temp = 0;
    temp = number;
    while (flag)
    {
        int t;
        flag = false;
        while (temp > 0)
        {
            sum += (temp % 10);
            temp /= 10;
        }
        if (sum / 10 != 0)
        {
            flag = true;
            temp = sum;
            sum = 0;
        }
    }
    cout << sum;
}