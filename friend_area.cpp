#include<bits/stdc++.h>
using namespace std;
class rectangle{
    int length,bredth,area_i;
    public:
    rectangle(int a,int b){
        length = a;
        bredth = b;
    }
    friend void area(rectangle &r);
    void display(){
        cout<<"area"<<area_i;
    }
};
void area(rectangle &r){
    r.area_i = r.bredth * r.length;
}
int main(){
    cout<<"enter length and bredth";
    int length,bredth;
    cin>>length>>bredth;
    rectangle r(length,bredth);
    //r.area();
    area(r);
    r.display();
    
}