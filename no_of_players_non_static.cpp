#include<iostream>
using namespace std;
int count = 0;
class game{
    public:
    game(){
        ::count++;
    }
};
int main(){
    int n;
    cin>>n;
    game g[n];
    cout<<::count;
}