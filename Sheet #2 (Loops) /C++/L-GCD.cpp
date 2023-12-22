#include <iostream>
using namespace std;
int main()
{
    int num1, num2, i, max = 0, temp;

    cin >> num1 >> num2;

    if (num1 > num2)
    {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    for (i = 1 ; i <= num1 ; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
            max = i;
    }

    cout << max << endl;
    return (0);
}