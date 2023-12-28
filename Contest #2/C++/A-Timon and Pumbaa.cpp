#include <iostream>
using namespace std;
int main()
{
    long long a, b, result;

    cin >> a >> b;
    result = a - b;

    if (a - b >= 0)
        cout << result << endl;
    else
        cout << 0 << endl;

    return (0);
}
