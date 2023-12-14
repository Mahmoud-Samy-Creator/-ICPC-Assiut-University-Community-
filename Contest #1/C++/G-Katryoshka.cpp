#include <iostream>
using namespace std;

/*
=> Body combination:
    1. Two eyes and one body.
    2. Two eyes, one mouth, and one body.
    3. One eye, one mouth, and one body. 
*/

int main()
{
    long long eyes, mouths, bodies, comp = 0;
    
    cin >> eyes >> mouths >> bodies;

    /*--------------------------------------------------------*/
    /* Wild cases */
    if (bodies == 0 || eyes == 0)
    {
        comp = 0;
        cout << comp << endl;
        return (0);
    }

    if (eyes == 1)
    {
        comp = 1;
        cout << comp << endl;
        return (0);
    }

    if (bodies == 1)
    {
        comp = 1;
        cout << comp << endl;
        return (0);
    }

    /* According to number of eyes */
    if (bodies >= eyes && mouths >= eyes)
    {
        comp += eyes;
        cout << comp << endl;
        return (0);
    }

    if (eyes >= bodies && mouths >= bodies)
    {
        comp += bodies;
        cout << comp << endl;
        return (0);
    }
    /*--------------------------------------------------------*/

    /* 1 eye, 1 body, 1 month */
    if (mouths > 0 && eyes >= mouths && bodies >= mouths)
    {
        comp += mouths;
        eyes -= comp;
        bodies -= comp;
        mouths = 0;
    }

    /* 2 eye, 1 body */
    if (bodies >= (eyes / 2))
    {
        comp += (eyes / 2);
        bodies -= eyes /2;
        eyes = 0;
    }

    /* 1 eye 1 body */
    if (eyes >= bodies)
    {
        comp += bodies;
        eyes -= bodies;
        bodies = 0;
    }

    /* 2 eye, 1 body, 1 mouth*/
    if (bodies >= (eyes / 2) && mouths >= (eyes / 2))
    {
        comp += (eyes / 2);
        bodies -= comp;
        mouths -= comp;
        eyes = 0;
    }

    cout << comp << endl;
    return (0);
}

