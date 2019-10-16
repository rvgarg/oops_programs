#include<iostream>
using namespace std;

class first{
public:
    int sum(int a){
        int b;
        cout<<"Enter other number: ";
        cin>>b;
        return a+b;
    }
    int sum(int a,int b){
        return a+b;
    }
    float sum(float a,int b){
        return a+(float)b;
    }
    float sum(int a,float b){
        return (float)a+b;
    }
    float sum(float a,float b){
        return a+b;
    }
};

int main(){
    first f;
    cout<<f.sum(5.34f,6.34f)<<endl;
    return 0;
}
