#include <iostream>
using namespace std;
int main()
{
    short num, i;
    int result = 0, fib1, fib2;

    fib1 = 0;
    fib2 = 1;

    cin >> num;
    
    if (num == 1)
        cout << 0 << endl;

    else if (num == 2)
        cout << 0 << ' ' << 1 << ' ';

    else
    {
        cout << 0 << ' ' << 1 << ' ';
        for (i = 2 ; i < num ; i++)
        {
            result = fib1 + fib2;
            fib1 = fib2;
            fib2 = result;
            cout << result << ' ';
        }
    }
    
    return (0);
}
