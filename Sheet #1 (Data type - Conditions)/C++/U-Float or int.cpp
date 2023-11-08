#include <iostream>
using namespace std;

int main()
{
    double num, floating_part;
    int integer_part;

    cin >> num;

    integer_part = int(num);
    floating_part = num - integer_part;

    if(floating_part == 0)
    {
        cout << "int " << int(num) << endl;
    }
    
    else
    {
        cout << "float " << int(num) << ' ' << floating_part << endl;
    }

    return (0);
}