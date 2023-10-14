#include <iostream>
using namespace std;

// Using a normal function : -------------

int fact(int y)
{
    int i, factNo = 1;
    if (y <= 1)
    {
        return 1;
    }
    else
    {
        for (int i = 1; i <= y; i++)
        {
            factNo = factNo * i;
        }
    }
    return factNo;
}

// using recursion function find the factorial : -------------

int factRecursion(int z)
{
    if (z <= 1)
    {
        return 1;
    }
    else
    {
        return z * fact(z - 1);
    }
}
int main()
{
    // by using normal function : ------------

    int x;
    cout << "Enter the value of x : ";
    cin >> x;
    int factNo = fact(x);
    cout << "Factorial of " << x << " is  : " << factNo << endl;

    // By using recursion function : ----------

    int m;
    cout << "Enter the value of x : ";
    cin >> m;
    int factNoRecursion = factRecursion(m);
    cout << "Factorial of " << m << " is  : " << factNoRecursion << endl;
}