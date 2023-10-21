//                                            QUICK SORT                                                //

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
    int i = low + 1;
    int j = high;
    int temp;
    while (i < j)
    {
        while (a[i] <= pivot)
        {
            i++;
        }
        while (a[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }

        // swap a[low] and a[j]: ------------
        temp = a[low];
        a[low] = a[j];
        a[j] = temp;
        return j;
    }
}

//  function for quick sort : -------
void quickSort(int a[], int low, int high)
{
    int partitionIndex; // index of pivot after partition
    if (low < high)
    {
        partitionIndex = partition(a, low, high);
        quickSort(a, low, partitionIndex - 1);  // sort left sub-array
        quickSort(a, partitionIndex + 1, high); // sort right sub-array
    }
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
