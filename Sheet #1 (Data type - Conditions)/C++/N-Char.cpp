#include <iostream>
using namespace std;

int main()
{
    char ch;

    cin >> ch;

    if (int(ch) >= 65 && int(ch) <= 90)
    {
        cout << char(ch + 32) << endl;
    }

    else if (int(ch) >= 97 && int(ch) <= 122)
    {
        cout << char(ch - 32) << endl;
    }

    return (0);
}