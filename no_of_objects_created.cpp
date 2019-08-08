#include<iostream>
using namespace std;
class foo{
    public:
    static int count;
    foo(){count++;}
};
int foo::count = 0;
// foo::foo(){
    // count++;
// }
int main(){
    // foo f = foo(),g = foo(),h = foo(),i = foo();
    foo a,b,c,d;
    cout<<foo::count;
}