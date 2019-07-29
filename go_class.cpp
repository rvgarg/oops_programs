#include<iostream>
using namespace std;
class Go{
    public:
    string str;
    void display(){
        cout<<"hii "<<str;
    }
};
int main(){
    Go g1;
    cin>>g1.str;
    g1.display();
}