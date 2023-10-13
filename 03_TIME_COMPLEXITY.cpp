// Find the sum of all number from range x to y.
// Experimenal analysis : ------

#include <iostream>
using namespace std;

int sum_in_range(int x, int y)
{
    //  Experimental analysis : ------
    int result = 0;
    for (int i = x; i <= y; i++)
    {
        result += i;
    }
    return result;
}

int sum_in_range_optimized(int x, int y)
{
    // mathematical approach :------------

    int n = (y - x + 1);
    int a = x;
    int result = (n * (2 * a + (n - 1) * 1)) / 2;
    return result;
}
int main()
{
    cout << "Sum from x to y : " << sum_in_range(2, 10000000);
    cout << "Sum from x to y : " << sum_in_range_optimized(2, 10000000);
    return 0;
}