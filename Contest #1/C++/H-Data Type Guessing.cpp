#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    double n, k, a, result, my_result;
    long long int_num;

    cin >> n >> k >> a;

    result = (n * k) / a;
    int_num = result;
    my_result = result - int_num;

    if (my_result > 0)
    {
        cout << "double" << endl;
        return (0);
    }

    if (int_num <= 2147483647)
    {
        cout << "int" << endl;
    }

    else
        cout << "long long" << endl;

	return 0;
}
