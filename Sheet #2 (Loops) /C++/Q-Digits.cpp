#include <iostream>
#include <string>
using namespace std;

int main()
{
    short number_of_test_cases, i;
    long long value, temp, temp2;
    string digits = "";

    cin >> number_of_test_cases;

    for (i = 0 ; i < number_of_test_cases ; i++)
    {
        cin >> value;

        if (value == 0)
        {
            cout << 0 << endl;
            continue;
        }
        temp = value;
        temp2 = value;

        while (temp)
        {
            temp2 = temp % 10;
            temp = temp / 10;
            digits += to_string(temp2);
            digits += ' ';
            
        }
        cout << digits << '\n';
        digits = "";
    }
    return (0);
}
