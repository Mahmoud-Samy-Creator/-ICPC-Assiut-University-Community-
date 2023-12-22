#include <iostream>
using namespace std;
int main()
{
    short base, i, j;

    cin >> base;

    for (i = base ; i >= 0 ; i--)
    {
        for (j = 0 ; j < i ; j++)
            cout << '*';

        cout << '\n';
    }
    return (0);
}