#include<iostream>
using namespace std;
class Rectangle{
    private:
    int length = 0;
    int bredth = 0;

    public:
    Rectangle(int x,int y){
        length = x;
        bredth = y;
    }
    void area(){
        int area = length* bredth;
        cout<<area;
    }
};

int main(){
    int x, y;
    cin>>x>>y;
    Rectangle r1(x,y);
    r1.area();
}