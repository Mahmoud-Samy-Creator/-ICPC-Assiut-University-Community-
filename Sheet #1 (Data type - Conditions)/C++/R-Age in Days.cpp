#include <iostream>
using namespace std;

int main()
{
    long long int num;
    int years, months, days;

    cin >> num;
    years = num / 365;
    months = (num - (365 * years)) / 30;
    days = (num - (365 * years) - (30 * months));

    cout << years << " years" << endl;
    cout << months << " months" << endl;
    cout << days << " days" << endl;

    return (0);
}