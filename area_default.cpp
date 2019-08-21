#include<iostream>
using namespace std;
class rectangle
{
private:
    int length,bredth,area_i;
public:
    rectangle(){
        cin>>length>>bredth;
    }
    void area(){
        area_i = length * bredth;
    }
    void display(){
        cout<<"area : "<<area_i;
    }
};
int main(){
    cout<<"enter lenght and bredth";
    rectangle r;
    r.area();
    r.display();
    return 0;
}