#include <iostream>
#include <string>

using namespace std;
int main()
{
    long long number, temp, i, count = 0;
    short non_zero;
    string num1, num2 = "";

    cin >> number;

    num1 = to_string(number);
    temp = number;

    while (number != 0)
    {
        count++;
        number = number / 10;
    }
    number = temp;

    for (i = 0 ; i < count ; i++)
    {
        temp = number % 10;
        number = number / 10;
        num2 += to_string(temp);
        temp = number;
    }

    non_zero = num2.find_first_not_of('0');
    if (non_zero != string::npos)
        num2.erase(0, non_zero);

    cout << num2 << endl;
    if (num1 == num2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return (0);
}