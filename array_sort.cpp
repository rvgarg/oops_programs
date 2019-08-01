#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[5];
    cout<<"enter 5 numbers ";
    for (int i = 0; i < 5; i++)
    {
        cin>>a[i];
    }
    sort(a,a+5);
    for (int i = 0; i < 5; i++)
    {
        cout<<a[i]<<endl;
    }
    
}