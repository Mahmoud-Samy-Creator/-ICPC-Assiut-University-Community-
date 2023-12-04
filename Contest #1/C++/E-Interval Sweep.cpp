#include <iostream>
using namespace std;
int main()
{
    long long a, b;

    cin >> a >> b;

    if (a == 0 && b == 0)
    {
        cout << "NO" << endl;
        return (0);
    }

    long long res = a - b;


    if (res == 1 || res == -1 || res == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return (0);
}
