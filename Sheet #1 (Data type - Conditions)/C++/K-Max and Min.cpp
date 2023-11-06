#include <iostream>
using namespace std;

long long max_num(long long a, long long b, long long c)
{
    long long max;

    if (a >= b && a >= c)
        max = a;

    if (b >= a && b >= c)
        max = b;

    if (c >= a && c >= b)
        max = c;

    if (a == b && a == c)
        max = a;

    return (max);
}

long long min_num(long long a, long long b, long long c)
{
    long long min;

    if (a <= b && a <= c)
        min = a;

    if (b <= a && b <= c)
        min = b;

    if (c <= a && c <= b)
        min = c;

    if (a == b && a == c)
        min = a;

    return (min);
}

int main()
{
    long long a, b, c, max;

    cin >> a >> b >> c;

    cout << min_num(a, b, c) << ' ' << max_num(a, b, c) << endl;

    return (0);
}