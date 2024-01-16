//        ------------------------------------         QUICK SORT           ------------------------------------       //

#include <iostream>
using namespace std;

// function for array printing : ----
void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "  ";
    }
    cout << "\n";
}

//  function for set the pivot element at right place : -----
int partition(int a[], int low, int high)
{
    int pivot = a[low];
    int count = 0;
    for (int i = low + 1; i <= high; i++)
    {
        if (a[i] <= pivot)
        {
            count++;
        }
    }

    int pivot_index = low + count;
    swap(a[pivot_index], a[low]);

    // left and right part handling

    int i = low;
    int j = high;
    while (i < pivot_index && j > pivot_index)
    {
        while (a[i] <= pivot)
        {
            i++;
        }
        while (a[j] > pivot)
        {
            j--;
        }
        if (i < pivot_index && j > pivot_index)
        {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }
}

//  function for quick sort : -------
void quickSort(int a[], int low, int high)
{
    if (low >= high)
    {
        return;
    }

    // index of pivot after partition
    int p;
    p = partition(a, low, high);
    // sort left sub-array
    quickSort(a, low, p - 1);
    // sort right sub-array
    quickSort(a, p + 1, high);
}

//  this is main function : -----
int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    int a[n];
    //     inserting the element of the array : ----
    cout << "Enter element of the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int low = 0;
    int high = n - 1;

    // Printing array before sorting : ------
    cout << "\nUnsorted array is : ";
    printArray(a, n);

    // calling quickSort function :-------
    quickSort(a, low, high);

    // Printing array after sorting : -------
    cout << "\nSorted array is : ";
    printArray(a, n);
}
