#include<iostream>
using namespace std;

class base{
public:
    int a;
};
class square:public base{
    public:
        void setv(int b){
            a=b;
        }
        void print(){
            cout<<"Square : "<<a*a<<endl;
        }
};
class cube:public base{
    public:
        void setv(int b){
            a=b;
        }
        void print(){
            cout<<"Cube : "<<a*a*a<<endl;
        }
};

int main(){
    int a=5;
    square s;
    s.setv(a);
    s.print();
    cube c;
    c.setv(a);
    c.print();
    return 0;
}
