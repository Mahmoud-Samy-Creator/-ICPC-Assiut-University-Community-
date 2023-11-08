#include <iostream>
using namespace std;

int main()
{
    long long int num_1, num_2;
    char op;

    cin >> num_1 >> op >> num_2;

    if (op == '+')
    {
        cout << num_1 + num_2 << endl;
    }

    if (op == '-')
    {
        cout << num_1 - num_2 << endl;
    }
    if (op == '*')
    {
        cout << num_1 * num_2 << endl;
    }
    if (op == '/')
    {
        cout << int(num_1 / num_2) << endl;
    }

    return (0);
}