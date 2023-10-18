// SELECTION SORT : --------

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    int a[n];

    // inserting the element of the array : ------

    cout << "Enter the element of the array : ";
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    // displaying the array : --------
    cout << "\n Array is : ";
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << "  ";
    }

    // Selection sort algorithm : ------

    for (int i = 1; i <= n - 1; i++)
    {
        int min = a[i];
        int loc = i;
        for (int j = i + 1; j <= n; j++)
        {
            if (min > a[j])
            {
                min = a[j];
                loc = j;
            }
        }
        if (a[loc] != a[i])
        {
            int temp = a[loc];
            a[loc] = a[i];
            a[i] = temp;
        }
    }
    // displaying the sorted array : --------
    cout << "\nSorted Array is : ";
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << "  ";
    }
}