#include<iostream>
using namespace std;
int main(){
    int a = 100,*p1;
    p1 = &a;
    int &p2 = a;
    cout<<p1<<endl;
    cout<<p2;
}