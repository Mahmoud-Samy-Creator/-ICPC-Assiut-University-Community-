#include <iostream>
using namespace std;

int main()
{
    int test_cases, num1, num2, temp, i, j, sum = 0;

    cin >> test_cases;

    for (j = 0 ; j < test_cases ; j++)
    {
        cin >> num1 >> num2;

        if (num1 > num2)
        {
            temp = num1;
            num1 = num2;
            num2 = temp;
        }

        for (i = num1 + 1 ; i < num2 ; i++)
            if (i % 2 != 0)
                sum += i;

        cout << sum << endl;
        sum = 0;
    }
    return (0);
}
