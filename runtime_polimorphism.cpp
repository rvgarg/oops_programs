#include <iostream>
using namespace std;
class base
{
public:
    void display()
    {
        cout << "base class called" << endl;
    }
    virtual void show()
    {
        cout << "base class " << endl;
    }
};
class child : public base
{
public:
    void display()
    {
        cout << "child class called" << endl;
    }
    void show()
    {
        cout << "child class" << endl;
    }
};
int main()
{
    base *b1;
    b1 = new child();
    b1->display();
    b1->show();
}