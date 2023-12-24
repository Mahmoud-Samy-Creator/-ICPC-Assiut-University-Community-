#include <iostream>
using namespace std;

int main() {
    long long n, i, sum = 0, temp;
    short a, b, sure;

    cin >> n >> a >> b;

    for (i = 1 ; i <= n ; i++)
    {
        temp = i;
        sure = 0;

        while(temp)
        {
            sure += (temp % 10);
            temp /= 10;
        }

        if (sure >= a && sure <= b)
        {
            sum += i;
        }
    }

    cout << sum << endl;
    return 0;
}
