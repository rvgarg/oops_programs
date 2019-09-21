#include <bits/stdc++.h>
using namespace std;
void calc()
{
    long int a[101][2] = {0};
    int n;
    cin >> n;
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i][0];
        if (i == 0)
        {
            a[i][1] = 0;
        }
        else if (a[i][0] > a[i - 1][0])
        {
            if (flag == 0)
            {
                a[i - 1][1] = n - i;
            }
            else
            {
                for (int j = 0; j <= flag; j++)
                {
                    a[i - 1 - j][1] = n - i;
                }
                flag = 0;
            }
        }
        else
        {
            flag++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i][1] << " ";
    }
    cout << endl;
}
int main()
{
    // cin.tie(NULL);
    // ios_base::sync_with_stdio(false);
    long long int test;
    cin >> test;
    for (long long int i = 1; i <= test; i++)
    {
        calc();
    }
    return 0;
}