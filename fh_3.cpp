#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream sf;
    sf.open("output.txt",ios::app);
    string name;
    cout<<"enter name of file you want to append  ";
    cin>>name;
    ifstream fi;
    fi.open(name);
    string line;
    while (!fi.eof())
    {
        getline(fi,line);
        sf<<line<<endl;
    }
    fi.close();
    sf.close();
    fi.open("output.txt");
    while (!fi.eof())
    {
        getline(fi,line);
        cout<<line<<endl;
    }
    
}