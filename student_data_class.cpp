#include <bits/stdc++.h>
using namespace std;
class student
{
    int rollno;
    string name;
    string classOfStudent;
    double mobileNumber;
    string Address;

public:
    student()
    {
        cout << "enter rollnumber";
        cin >> rollno;
        cout << "enter name";
        cin >> name;
        cout << "enter class";
        cin >> classOfStudent;
        cout << "enter address";
        cin >> Address;
        cout << "enter mobile number";
        cin >> mobileNumber;
    }
    void printData()
    {
        cout << rollno << "\t" << name << ",\t\t" << classOfStudent << ",\t" << mobileNumber << ",\t" << Address << endl;
    }
};
class studentRecord
{
    vector<student> v;

public:
    int addStudent(student s)
    {
        v.push_back(s);
        return 0;
    }
    void printStudents()
    {
        cout << "rollno\tname\tclassOfStudent\tmobileNumber\tAddress\n";
        for (int i = 0; i < v.size(); i++)
        {
            v[i].printData();
        }
    }
};
int main()
{
    bool flag = false;
    studentRecord record;
    do
    {
        record.addStudent(student());
        cout << "do you want to add more record?? (y/n)";
        char ch;
        cin >> ch;
        if (ch == 'y')
        {
            flag = true;
        }
        else
        {
            flag = false;
        }

    } while (flag);
    cout << "entered records are :" << endl;
    record.printStudents();
}