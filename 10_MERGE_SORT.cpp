//      ------------------------------------ :  MERGE SORT  : ----------------------------------------  //

#include <iostream>
using namespace std;

// function for display the array's element
void displayArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "  ";
    }
}

// function for merging the element after breaking
void merge(int arr[], int l, int mid, int r)
{
    int an = mid - l + 1;
    int bn = r - mid;
    //  create 2 temp arrays ;
    int a[an];
    int b[bn];

    for (int i = 0; i < an; i++)
    {
        a[i] = arr[l + 1];
    }
    for (int j = 0; j < bn; j++)
    {
        b[j] = arr[mid + 1 + j];
    }

    int i = 0;  // initial index of first subarray, a
    int j = 0;  // initial index of second subarray, b
    int k = l;  // initial index of merged subarray, arr
    while (i < an && j < bn)
    {
        if (a[i] < b[j])
        {
            arr[k++] = a[i++];
        }
        else
        {
            arr[k++] = b[j++];
        }
    }
    while (i < an)
    {
        arr[k++] = a[i++];
    }
    while (j < bn)
    {
        a[k++] = a[j++];
    }
}

// function for merge sort.
void mergeSort(int a[], int start, int end)
{
    //  base case
    if (start >= end)
    {
        return;
    }

    int mid = (start + end) / 2;
    mergeSort(a, start, mid);
    mergeSort(a, mid + 1, end);
    merge(a, start, mid, end);
}
int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int a[n];
    int b[n];

    //  inserting element in array
    cout << "Enter the elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int start = 0;
    int end = n - 1;

    // unsorted array
    cout << "\nUnsorted array is : ";
    displayArray(a, n);
    // calling merge sort
    mergeSort(a, start, end);
    // sorted array
    cout << "\nSorted array is : ";
    displayArray(a, n);

    return 0;
}