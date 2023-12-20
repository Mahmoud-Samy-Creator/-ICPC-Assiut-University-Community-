#include <iostream>
using namespace std;
int main()
{
    int input, number, i;
    bool ch;
    cin >> input;

    for (number = 2 ; number <= input ; number++)
    {
        ch = 0;
        for (i = 2 ; i < number ; i++)
        {
            if (number % i == 0)
                ch = 1;
        }
        if (ch == 0)
            cout << i << " ";
    }
    return (0);
}
