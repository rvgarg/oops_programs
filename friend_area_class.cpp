#include<bits/stdc++.h>
using namespace std;
class rectangle{
    int length,bredth,area_i;
    public:
    rectangle(int a,int b){
        length = a;
        bredth = b;
    }
    friend class display;
};
class display{
    public:
    void displa(rectangle &r){
        cout<<"area"<<r.area_i;
    }
    void area(rectangle &r){
        r.area_i = r.bredth * r.length;
    }
};
int main(){
    int len,bred;
    cin>>len>>bred;
    rectangle r(len,bred);
    display d;
    d.area(r);
    d.displa(r);
}
