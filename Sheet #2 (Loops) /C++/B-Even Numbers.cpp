#include <iostream>
using namespace std;
int main()
{
    int limit, i, result = 0;

    cin >> limit;
    for (i = 1 ; i <= limit ; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
            result++;
        }
    }

    if (result == 0)
        cout << -1 << endl;

    return (0);
}
