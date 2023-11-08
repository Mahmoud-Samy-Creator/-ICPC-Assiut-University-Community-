#include <iostream>
using namespace std;

int main()
{
    char ch;

    cin >> ch;

    if (int(ch) >= 65 && int(ch) <= 90)
    {
        cout << "ALPHA\nIS CAPITAL" << endl;
    }

    else if (int(ch) >= 97 && int(ch) <= 122)
    {
        cout << "ALPHA\nIS SMALL" << endl;
    }

    else
    {
        cout << "IS DIGIT";
    }

    return (0);
}