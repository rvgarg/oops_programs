#include<iostream>
using namespace std;
class timeChanger{
    int secondsI;
    public:
    // timeChanger(int secondsI){
    //     this->secondsI = secondsI;
    // }
    timeChanger(){
        cin>>secondsI;
    }
    convertTime(){
        int seconds = 0 ,minutes = 0 ,hours = 0 ;
        seconds = secondsI % 60;
        secondsI /= 60;
        minutes = secondsI % 60;
        secondsI /= 60;
        hours = secondsI;
        cout<<hours<<":"<<minutes<<":"<<seconds;
    }
};
int main(){
    // int input;
    // cin>>input;
    timeChanger t = timeChanger();
    t.convertTime();
}