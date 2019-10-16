#include<iostream>
using namespace std;

class vehicle{
public:
    virtual void speed(){
        cout<<"In speed of vehicle"<<endl;
    }
    virtual void maintenance(){
        cout<<"In maintenance of vehicle"<<endl;
    }
    void value(){
        cout<<"In value of vehicle"<<endl;
    }
};

class fourwheeler:public vehicle{
    public:
        void speed(){
            cout<<"In speed of four wheeler"<<endl;
        }
        void maintenance(){
            cout<<"In maintenance of four wheeler"<<endl;
        }
};
class twowheeler:public vehicle{
    public:
        void speed(){
            cout<<"In speed of two wheeler"<<endl;
        }
        void maintenance(){
            cout<<"In maintenance of two wheeler"<<endl;
        }
        void value(){
            cout<<"In value of two wheeler"<<endl;
        }
};

class airborne:public vehicle{
    public:
        void speed(){
            cout<<"In speed of airborne"<<endl;
        }
};

int main(){
    vehicle v;
    fourwheeler fw;
    twowheeler tw;
    airborne a;
    v.speed();
    v.maintenance();
    v.value();
    fw.speed();
    fw.maintenance();
    tw.speed();
    tw.maintenance();
    a.speed();
    v.maintenance();
    v.value();
    v.value();
    v.speed();
    fw.speed();
    v.maintenance();
    return 0;
}
