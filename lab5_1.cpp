#include<iostream>
using namespace std;

class first{
private:
    int rollno;
protected:
    void getRollno(){
        cout<<"Roll No: "<<rollno<<endl;
    }
    void setRollno(){
        cin>>rollno;
    }

};

class second:protected first{
private:
    int mark1,mark2,mark3;
protected:
     void getMarks(){
        cout<<"Marks: "<<mark1<<" "<<mark2<<" "<<mark3<<" "<<endl;
    }
    void setMarks(){
        cin>>mark1>>mark2>>mark3;
    }
};
class third:public second{
    public:
        void getValues(){
            getRollno();
            getMarks();
        }
        void setValues(){
            setRollno();
            setMarks();
        }

};

int main(){
    int n;
    cin>>n;
    third students[n];
    for(int i=0;i<n;i++){
        students[i].setValues();
        students[i].getValues();
    }
    return 0;
}

