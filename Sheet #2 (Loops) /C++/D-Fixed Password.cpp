#include <iostream>
using namespace std;
int main()
{
    int correct_password = 1999, lives;

    cin >> lives;

    while (lives != correct_password)
    {
        cout << "Wrong" << endl;
        cin >> lives;
    }

    if (lives == correct_password)
        cout << "Correct" << endl;
    return (0);
}
