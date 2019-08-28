#include <iostream>
using namespace std;
class marks
{
private:
    int sub1, sub2;

public:
    marks(int a, int b)
    {
        sub1 = a;
        sub2 = b;
    }
    void display()
    {
        cout << "subject 1: " << sub1 << endl
             << "subject 2: " << sub2;
    }
};
int main()
{
    int a, b;
    cin >> a >> b;
    marks m(a, b);
    m.display();
}