#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    short test_cases, i;
    int ones, decimal = 0;
    double num, temp;
    string binary = "", new_binary = "";

    cin >> test_cases;

    for (i = 0 ; i < test_cases ; i++)
    {
        cin >> num;

        /* Get the binary representation of numbers */
        while(num)
        {
            num /= 2;
            temp = (int)num;

            if (num - temp == 0)
                binary += '0';
            else
                binary += '1';
            num = temp;
        }

        /* Counting how many ones in binary representation */
        ones = count(binary.begin(), binary.end(), '1');

        temp = ones;
        while (ones--)
            new_binary += '1';

        /* Get decimal representation of new binary */
        while(temp--)
            decimal += pow(2, temp);

        cout << decimal << endl;
        decimal = 0;
        binary = "";
        new_binary = "";
    }
    return (0);
}