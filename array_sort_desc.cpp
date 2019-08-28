#include <bits/stdc++.h>
using namespace std;
int cmpr(int a1, int a2)
{
    return -(a1 - a2);
}
int main()
{
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    sort(a, a + 5, cmpr);
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << endl;
    }
}