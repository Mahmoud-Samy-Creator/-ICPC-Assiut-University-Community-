#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double a, b;

    cin >> a >> b;

    cout << fixed << setprecision(2) << (b/(1-(a/100))) << endl;

    return (0);
}
