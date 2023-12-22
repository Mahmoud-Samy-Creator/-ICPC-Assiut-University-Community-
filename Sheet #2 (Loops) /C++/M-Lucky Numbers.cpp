#include <iostream>
using namespace std;
int main()
{
    int num1, num2, i, temp, temp2, sure = 0;
    bool ch = 0;

    cin >> num1 >> num2;

    for (i = num1 ; i <= num2 ; i++)
    {
        if (i < 10 && (i == 4 || i == 7))
        {
            cout << i << " ";
            sure = 1;
            continue;
        }

        if (i > 10)
        {
        temp = i;
        temp2 = i;

        while (temp != 0 && ch == 0)
        {
            temp2 = temp % 10;
            if (temp2 != 4 && temp2 != 7)
            {
                ch = 1;
                continue;
            }
            temp = temp / 10;
        }
        if (temp == 0)
        {
            cout << i << " ";
            sure = 1;
        }
        ch = 0;
        }
    }

    if (sure == 0)
        cout << -1;

return (0);
}