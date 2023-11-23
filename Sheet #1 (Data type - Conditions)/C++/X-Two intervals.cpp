#include <iostream>
using namespace std;

int main()
{
	long long l1, r1, l2, r2;

	cin >> l1 >> r1 >> l2 >> r2;

	/* [l1 - r1] inside [l2 - r2]*/
	if (l1 >= l2 && l1 <= r2 && r1 <= r2 && r1 >= l2)
	{
        cout << l1 << ' ' << r1 << endl;
        return (0);
    }

	/* [l2 - r2] inside [l1 - r1]*/
	if (l2 >= l1 && l2 <= r1 && r2 <= r1 && r2 >= l1)
	{
        cout << l2 << ' ' << r2 << endl;
        return (0);
    }

    /* Intersection between the two intervals */
	if (l1 >= l2 && l1 <= r2 && r1 >= r2 && r1 >= l2)
	{
        cout << l1 << ' ' << r2 << endl;
        return (0);
    }

	if (l2 >= l1 && l2 <= r1 && r2 >= r1 && r2 >= l1)
	{
        cout << l2 << ' ' << r1 << endl;
        return (0);
    }

	else
		cout << -1 << endl;
	return (0);
}
