#include <iostream>
using namespace std;
int main()
{
    int size, i, j, temp;

    cin >> size;
    for (i = 0 ; i < size ; i++)
    {
        temp -= i;
        for (j = 0 ; j < 2 * size - 1 ; j++)
        {
            if (j - i == size - 1)
            {
                cout << '*';
                break;
            }
            if (j >= size - i - 1 && j - i < size - 1)
                cout << '*';
            else
                cout << ' ';
        }
        cout << '\n';
    }
    return (0);
}