#include <iostream>
using namespace std;
int main()
{
    short base, i, j;

    cin >> base;

    for (i = 0 ; i < base ; i++)
    {
        for (j = 0 ; j <= i ; j++)
        {
            cout << '*';
        }
        cout << '\n';
    }
    return (0);
}