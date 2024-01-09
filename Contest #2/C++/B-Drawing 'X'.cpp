#include <iostream>
using namespace std;

int main()
{
    short input, i, j, k, star,  core;

    cin >> input;
    core = input - 2;
    string mid = "";

    for (i = 0 ; i < input / 2 ; i++)
        mid += '*';

    for (i = 0 ; i < input / 2; i++)
    {
        for (j = 0 ; j < i ; j++)
            cout << '*';

        cout << '\\';

        for (k = 0 ; k < core ; k++)
            cout << '*';

        cout << '/';
        for (j = 0 ; j < i ; j++)
            cout << '*';

        cout << '\n';
        core -= 2;
    }

    cout << mid << 'X' << mid << endl;
    core = 1;

    while (i-- && i >= 0)
    {
        for (j = 0 ; j < i ; j++)
            cout << '*';

        cout << '/';
        for (k = 0 ; k < core ; k++)
            cout << '*';

        cout << '\\';

        for (j = 0 ; j < i ; j++)
            cout << '*';

        cout << '\n';
        core += 2;
    }
    
    return (0);
}