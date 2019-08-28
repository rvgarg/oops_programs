#include <iostream>
using namespace std;
int main()
{
    int count[26] = {0};
    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        count[str[i] - 'a']++;
    }
    char ch;
    cout << "enter character whose frequency you want to search";
    cin >> ch;
    cout << count[ch - 'a'];
}