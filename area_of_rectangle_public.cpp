#include<iostream>
using namespace std;
class Rectangle{
    public:
    int length = 0;
    int bredth = 0;
    void area(){
        int area = length* bredth;
        cout<<area;
    }
};

int main(){
    Rectangle r1;
    cin>>r1.length>>r1.bredth;
    r1.area();
}