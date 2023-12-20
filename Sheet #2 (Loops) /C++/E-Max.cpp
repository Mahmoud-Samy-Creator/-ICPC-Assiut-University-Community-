#include <iostream>
using namespace std;
int main()
{
    long long max = 0, num;
    int i, number_of_values;

    cin >> number_of_values;

    for (i = 0 ; i < number_of_values ; i++)
    {
        cin >> num;
        if (num > max)
            max = num;
    }

    cout << max << endl;
    return (0);
}