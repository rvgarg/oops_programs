#include<iostream>
using namespace std;
class str{
    string st;
    public:
    str(string st){
        this->st = st;
    }
    void operator+(str &s){
        this->st.append(s.st);
        cout<<"concated string is :"<<this->st<<endl;
    }
};
int main(){
    string s1,s2;
    cin>>s1>>s2;
    str st1(s1),st2(s2);
    st1+st2;
    return 0;
}