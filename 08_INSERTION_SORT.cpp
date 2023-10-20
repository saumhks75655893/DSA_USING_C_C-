// ---------------------- : INSERTION SORT : -------------------------------- //

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;

    //  inserting the element of the array :

    int a[n];
    cout << "Enter the value of the array : ";
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    // displaying the unsorted array :

    cout << "\n\n The unsorted array is : ";
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << "   ";
    }

    //  INSERTION SORT ALGORITHM :

    for (int j = 2; j <= n; j++)
    {
        int key = a[j];
        int i = j - 1;
        while (i > 0 && a[i] > key)
        {
            a[i + 1] = a[i];
            i = i - 1;
        }
        a[i + 1] = key;
    }
    // displaying the unsorted array :

    cout << "\n\n The unsorted array is : ";
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << "   ";
    }
}