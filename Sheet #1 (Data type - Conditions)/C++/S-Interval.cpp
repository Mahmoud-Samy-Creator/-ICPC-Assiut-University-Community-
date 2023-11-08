#include <iostream>
using namespace std;

int main()
{
    double num;

    cin >> num;

    if (num < 0 || num > 100)
    {
        cout << "Out of Intervals" << endl;
        return (0);
    }

    if (num <= 25 && num >= 0)
        cout << "Interval [0,25]" << endl;

    else if (num <= 50)
        cout << "Interval (25,50]" << endl;

    else if (num <= 75)
        cout << "Interval (50,75]" << endl;

    else if (num <= 100)
        cout << "Interval (75,100]" << endl;

    return (0);
}