#include <iostream>
using namespace std;
int main()
{
    int number, i;

    cin >> number;

    for (i = 1 ; i <= 12 ; i++)
    {
        cout << number << " * " << i << " = " << number * i << endl;
    }
    return (0);
}
