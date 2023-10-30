//  ------------------------ :            MERGE SORT                    : ------------------------------- //

#include <iostream>
using namespace std;

//  printing function for array : ---------
void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "  ";
    }
    cout << "\n";
}

//  merge function : -----------

void Merge(int a[], int low, int mid, int high)
{
    int i, j, k, b[high-low+1];
    i = low;
    j = mid + 1;
    k = low;
    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            b[k] = a[i];
            i++;
            k++;
        }
        else
        {
            b[k] = a[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        b[k] = a[i];
        i++;
        k++;
    }
    while (j <= high)
    {
        b[k] = a[j];
        j++;
        k++;
    }
    for (int i = low; i <= high; i++)
    {
        a[i] = b[i];
    }
}

//  merge sort algorithm  : - - - - - - - - -- - - -  -- - -   -- - -  --  -- -- - - - -
void mergeSort(int a[], int low, int high)
{
    if (low < high)
    {
        int mid;
        mid = int((low + high) / 2);
        mergeSort(a, low, mid);
        mergeSort(a, mid + 1, high);
        Merge(a, low, mid, high);
    }
}
//  main function : ---------
int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    int a[n];
    //  inserting the element of the array : -----
    cout << "Enter the element of the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // printing the unsorted array : ---------
    cout << "Unsorted array is : ";
    printArray(a, n);

    //  merge algorithm call : ----------

    int low = 0;
    int high = n - 1;
    mergeSort(a, low, high);
    cout << "Sorted array is : ";
    printArray(a, n);
}