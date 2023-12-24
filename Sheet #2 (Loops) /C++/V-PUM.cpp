#include <iostream>
using namespace std;
int main()
{
    short n, i = 0, number = 1, sure = 0;

    cin >> n;

    while (sure <= 3)
    {
        if (sure == 3)
        {
            cout << "PUM" << endl;
            i++;
            sure = 0;
            number++;
            if (i == n)
                break;
        }

        cout << number << ' ';
        sure++;
        number++;
    }
    return (0);
}