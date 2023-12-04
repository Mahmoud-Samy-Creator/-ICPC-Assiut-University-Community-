#include <iostream>
#include <bitset>
using namespace std;

/**
 * Challenge: using bitset library to unsigned int <--> binary representaion
*/
int main()
{
    unsigned int decimal_num_1, decimal_num_2, result;

    cin >> decimal_num_1 >> decimal_num_2;

    bitset<32> binary_1(decimal_num_1);
    bitset<32> binary_2(decimal_num_2);
    bitset<32> sum = binary_1 ^ binary_2;

    result = sum.to_ulong();

    cout << result << endl;
    return (0);
}
