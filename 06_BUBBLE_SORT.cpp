#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;

    // Inserting the value of array : --------

    cout << "Enter the value of array : ";
    int a[size];
    for (int i = 1; i <= size; i++)
    {
        cin >> a[i];
    }

    //  Displaying the array : -------

    cout << "Unsorted array is : ";
    for (int i = 1; i <= size; i++)
    {
        cout << a[i] << "  ";
    }

    // BUBBLE SORT ALGORITHM : ---------

    for (int i = 1; i <= size - 1; i++)
    {
        for (int j = 1; j <= size - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    //  Printing the sorted array : -------

    cout << "\n\nSorted array is : ";
    for (int i = 1; i <= size; i++)
    {
        cout << a[i] << "  ";
    }
}