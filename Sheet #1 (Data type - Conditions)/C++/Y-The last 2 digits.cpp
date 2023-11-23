#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, num1, num2, num3, num4, result;

    cin >> a >> b >> c >> d;

    num1 = a % 100;
    num2 = b % 100;
    num3 = c % 100;
    num4 = d % 100;

    result = (num1 * num2 * num3 * num4)%100;

    if (result <= 9)
        cout << "0" << result;
    else
        cout << result;

    return (0);
}