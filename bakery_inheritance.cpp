#include <iostream>
using namespace std;
class bakery
{
public:
    int bakingTime, noOfIngredients;
    void bake(int Type)
    {
    }
};
class cake : public bakery
{
    int type, quantity;

public:
    cake()
    {
        bakingTime = 40;
        noOfIngredients = 8;
    }
    void bake(int type, int quantity)
    {
        cout << "baking will require " << bakingTime << "minutes and " << quantity * noOfIngredients << "ingredients to bake." << endl;
        char ch;
        cout << "Do you want to continue? (y/n):";
        cin >> ch;
        switch (ch)
        {
        case 'y':
            this->quantity = quantity;
            this->type = type;
            cout << quantity << "type: " << type << "cakes are baked." << endl;
            break;
        case 'n':
            cout << "baking aborted!!";
            break;
        default:
            cout << "Invalid input!!";
            break;
        }
    }
};
class bread : public bakery
{
    int type, quantity;

public:
    bread()
    {
        bakingTime = 20;
        noOfIngredients = 4;
    }
    void bake(int type, int quantity)
    {
        cout << "baking will require " << bakingTime << "minutes and " << quantity * noOfIngredients << "ingredients to bake." << endl;
        char ch;
        cout << "Do you want to continue? (y/n):";
        cin >> ch;
        switch (ch)
        {
        case 'y':
            this->quantity = quantity;
            this->type = type;
            cout << quantity << "type: " << type << "cakes are baked." << endl;
            break;
        case 'n':
            cout << "baking aborted!!";
            break;
        default:
            cout << "Invalid input!!";
            break;
        }
    }
};

int main()
{
    cout << "Hii, welcome to the bakery";
    int choice, qty, typ;
    cout << "enter 1 for cake and 2 bread ";
    cin >> choice;
    switch (choice)
    {
    case 1:
    {
        cake c;
        cout << "enter the quantity of cakes you want";
        cin >> qty;
        cout << "enter 1 for chocolate cake and 2 for vanilla cake";
        cin >> typ;
        if (typ != 1 && typ != 2)
        {
            cout << "invalid input!! try again";
        }
        c.bake(typ, qty);
    }
    break;
    case 2:
    {
        bread b;
        cout << "enter the quantity of breads you want";
        cin >> qty;
        cout << "enter 1 for wheat bread and 2 for brown bread";
        cin >> typ;
        if (typ != 1 && typ != 2)
        {
            cout << "invalid input!! try again";
        }
        b.bake(typ, qty);
    }
    break;
    default:
        cout << "Invalid input!! try again";
    }
}