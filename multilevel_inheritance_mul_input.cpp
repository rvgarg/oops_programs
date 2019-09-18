#include <bits/stdc++.h>
using namespace std;
class rollno
{
    string name;

protected:
    int roll;

public:
    int getRollno()
    {
        return roll;
    }
    void setName(string s)
    {
        name = s;
    }
    void setRollno(int r)
    {
        roll = r;
    }
};
class subjects : public rollno
{
    string sub1, sub2;

protected:
    int m_sub1, m_sub2;

public:
    int getMark1()
    {
        return m_sub1;
    }
    int getMark2()
    {
        return m_sub2;
    }
    void setSubName1(string s)
    {
        sub1 = s;
    }
    void setSubName2(string s)
    {
        sub2 = s;
    }
    string getSubName1()
    {
        return sub1;
    }
    string getSubName2()
    {
        return sub2;
    }
};
class total : public subjects
{
    int total_marks;

public:
    total(string s, string s1, string s2, int n, int n1, int n2)
    {
        this->setName(s);
        this->setSubName1(s1);
        this->setSubName2(s2);
        this->setRollno(n);
        this->m_sub1 = n1;
        this->m_sub2 = n2;
        total_marks = m_sub2 + m_sub1;
    }
    void display()
    {
        cout << "Rollno. : " << this->getRollno() << endl;
        cout << this->getSubName1() << " : " << this->m_sub1 << endl;
        cout << this->getSubName2() << " : " << this->m_sub2 << endl;
        cout << "total marks : " << total_marks << endl;
    }
};
int main()
{
    int n;
    cout << "enter the total number of students";
    cin >> n;
    vector<total> vt;
    for (int i = 0; i < n; i++)
    {
        string name, sub1, sub2;
        int roll, marks1, marks2;
        cout << "student" << i + 1 << " : " << endl;
        cout << "enter name ";
        cin >> name;
        cout << "enter subject1 name ";
        cin >> sub1;
        cout << "enter subject2 name ";
        cin >> sub2;
        cout << "enter subject1 marks ";
        cin >> marks1;
        cout << "enter subject2 marks ";
        cin >> marks2;
        total t(name, sub1, sub2, roll, marks1, marks2);
        vt.push_back(t);
    }
    for (int i = 0; i < vt.size(); i++)
    {
        vt[i].display();
    }
}