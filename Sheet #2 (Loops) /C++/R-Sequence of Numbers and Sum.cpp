#include <iostream>
using namespace std;

int main()
{
    int num1, num2, temp, i, sum = 0;

    while (1)
    {
        cin >> num1 >> num2;

        if (num1 <= 0 || num2 <= 0)
            break;

        if (num1 > num2)
        {
            temp = num1;
            num1 = num2;
            num2 = temp;
        }

        for (i = num1 ; i <= num2 ; i++)
        {
            cout << i << ' ';
            sum += i;
        }
        cout << "sum =" << sum << endl;
        sum = 0;
    }
    return (0);
}