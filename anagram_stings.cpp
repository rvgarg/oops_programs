#include<iostream>
using namespace std;
int main(){
    string str1,str2;
    int count1[26] = {0},count2[26] = {0};
    cout<<"enter 2 strings"<<endl;
    cin>>str1>>str2;
    if (str1.length() != str2.length())
    {
        cout<<"strings entered are not anagram";
        return 0;
    }
    
    for (int i = 0; i < str1.length(); i++)
    {
        count1[str1[i] - 'a']++;
        count2[str2[i] - 'a']++;
    }
    
    if (str1 == str2)
    {
        cout<<"strings entered are not anagram";
        return 0;
    }
    
    for (int i = 0; i < 26; i++)
    {
        if (count1[i] != count2[i])
        {
            cout<<"entered strings are not anagram";
            break;
        }
    }
    cout<<"entered strings are anagram";
}