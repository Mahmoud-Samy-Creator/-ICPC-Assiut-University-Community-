#include <iostream>
using namespace std;

int main()
{
    long long int a, b, c;
    char q, s;

    cin >> a >> s >> b >> q >> c;

    if (s == '+')
    {
        if ((a + b) == c)
            cout << "Yes" << endl;
        else
            cout << a + b;
    }

    if (s == '-')
    {
        if ((a - b) == c)
            cout << "Yes" << endl;
        else
            cout << a - b;
    }

    if (s == '*')
    {
        if ((a * b) == c)
            cout << "Yes" << endl;
        else
            cout << a * b;
    }

    return (0);
}