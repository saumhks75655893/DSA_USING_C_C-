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
int merge(int a[], int low, int mid, int high)
{
    int i, j, k;
    int n = low + high + 1;
    i = low;
    j = mid;
    k = low;
    int b[100];
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

    for(int i=low; i<=high;i++)
    {
        a[i] = b[i]; 
    }
}
// function for merge sort.
void mergeSort(int a[], int start, int end)
{
    //  base case
    if (start < end)
    {
        int mid = int((start + end) / 2);
        mergeSort(a, start, mid);
        mergeSort(a, mid + 1, end);
        merge(a, start, mid, end);
    }
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