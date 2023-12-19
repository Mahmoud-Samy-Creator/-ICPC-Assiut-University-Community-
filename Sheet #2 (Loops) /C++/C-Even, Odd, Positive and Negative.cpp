#include <iostream>
using namespace std;
int main()
{
    int number_of_vales, i, even = 0, odd = 0, positive = 0, negative = 0;
    long long num;

    cin >> number_of_vales;

    for (i = 0 ; i < number_of_vales ; i++)
    {
        cin >> num;
        if (num > 0)
            positive++;
        if (num < 0)
            negative++;
        if (num % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << positive << endl;
    cout << "Negative: " << negative << endl;

    return (0);
}
