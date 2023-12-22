#include <iostream>
using namespace std;
int main()
{
    string ch;
    short number_of_values, value, i, j;

    cin >> ch;
    cin >> number_of_values;

    for (i = 0 ; i < number_of_values ; i++)
    {
        cin >> value;

        for (j = 0 ; j < value ; j++)
            cout << ch;
    cout << '\n';
    }
    return (0);
}