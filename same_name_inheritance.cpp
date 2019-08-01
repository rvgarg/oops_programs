#include<iostream>
using namespace std;
class parent{
    public:
    int a = 10;

};
class child : public parent {
    public:
    int a = 20;
    public:
    printBothVariables(){
        cout<<"parent class member is "<<parent::a<<"\nchild class member is "<<a;
    }
};
int main(){
    child ch;
    ch.printBothVariables();
}