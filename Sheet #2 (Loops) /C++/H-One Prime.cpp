#include <iostream>
using namespace std;
int main()
{
    int number, i;

    cin >> number;

    if (number <= 1 || (number != 2 && number % 2 == 0))
        cout << "NO" << endl;
    else
    {
        for (i = 2 ; i*i <= number ; i++)
            if (number % i == 0)
            {
                cout << "NO" << endl;
                break;
            }

        if (i*i > number)
            cout << "YES" << endl;
    }
    return (0);
}
