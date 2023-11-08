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

long long middle_num (long long a, long long b, long long c)
{
    long long int middle;

    if ((a >= b && a <= c) || (a >= c && a <= b))
        middle = a;
    
    if ((b >= a && b <= c) || (b >= c && b <= a))
        middle = b;

    if ((c >= b && c <= a) || (c >= a && c <= b))
        middle = c;

    if (a == b && a == c)
        middle = a;

    return (middle);
}

int main()
{
    long long a, b, c, max, middle, min;

    cin >> a >> b >> c;

    min = min_num(a, b, c);
    middle = middle_num(a, b, c);
    max = max_num(a, b, c);

    cout << min << '\n' << middle << '\n' << max << endl;
    cout << '\n';
    cout << a << '\n' << b << '\n' << c << endl;

    return (0);
}