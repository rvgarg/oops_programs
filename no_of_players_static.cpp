#include<bits/stdc++.h>
using namespace std;
class game{
    public:
    static int num;
    game(){
        num++;
    }
};
int game::num = 0;
int main(){
    int n;
    cin>>n;
    game g[n];
    cout<<game::num;
}