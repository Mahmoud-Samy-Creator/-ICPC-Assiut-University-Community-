#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    long long num, n1, n2;

    cin >> num;

    n1 = num / 10;
    n2 = num % 10;

    if (n1 == 0 || n2 == 0)
    {
        cout << "YES" << endl;
        return (0);
    }
    if (n1 % n2 == 0 || n2 % n1 == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return (0);
}
