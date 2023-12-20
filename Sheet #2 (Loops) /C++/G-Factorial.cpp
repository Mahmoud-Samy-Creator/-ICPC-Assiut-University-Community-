#include <iostream>
using namespace std;
int main()
{
    long long number_of_tests, i, j, num, result = 1;

    cin >> number_of_tests;

    for (i = 0 ; i < number_of_tests ; i++)
    {
        cin >> num;
        if (num == 0)
            result = 1;

        else
        {
            for (j = 1 ; j <= num ; j++)
                result *= j;
        }

        cout << result << endl;
        result = 1;
    }
    return (0);
}
