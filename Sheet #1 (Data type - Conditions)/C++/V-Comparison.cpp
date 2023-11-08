#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char op;

    cin >> a >> op >> b;

    if (op == '>')
    {
        if (a > b)
            cout << "Right" << endl;
        else
            cout << "Wrong" << endl;
    }

    if (op == '<')
    {
        if (a < b)
            cout << "Right" << endl;
        else
            cout << "Wrong" << endl;
    }

    if (op == '=')
    {
        if (a == b)
            cout << "Right" << endl;
        else
            cout << "Wrong" << endl;
    }

    return (0);
}