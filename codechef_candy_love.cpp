#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        unsigned long long int n,total = 0;
        cin >> n;
        vector<unsigned long long int> vt,tt;
        for (unsigned long long int j = 0; j < n; j++)
        {
            unsigned long long int input;
            cin>>input;
            vt.push_back(input);
            total += input;
            // cout<<total<<endl;
            tt.push_back(total);
        }
        int fast;
        cin >> fast;
        unsigned long long int temp = total / (fast + 1),t = n-1;
        temp = temp * fast;
        while (tt[t]>temp)
        {
            // cout<<tt[t]<<endl;
            t--;
        }
        cout<<t+2<<" "<<n-t-2<<endl;
    }
}