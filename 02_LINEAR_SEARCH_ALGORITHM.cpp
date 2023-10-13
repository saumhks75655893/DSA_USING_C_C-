#include <iostream>
using namespace std;

int main()
{
    // LINEAR SEARCH : ------------

    int a, n;

    cout << "Enter the size of n : ";
    cin >> n;

    int b[n];

    // Inserting the elements of array by user : ---------

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the  " << i << "  element. ";
        cin >> b[i];
    }

    // Displaying the elements of array : ---------
    cout << "Elements of the array : ";
    cout << "{";
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " , ";
    }
    cout << "}";

    // Taking the input to search : ------

    cout << "\n\nEnter the value of a to search : ";
    cin >> a;

    // linear search algorithm to search the element : ---------
    int m = 0;
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (b[i] == a)
        {
            flag = 1;
            break;
        }
        else
        {
            m++;
        }
    }

    if (flag == 1)
    {
        cout << "\n\n";
        cout << a << " found at the position " << m;
    }
    else
    {
        cout << a << " not found in the array.";
    }
}