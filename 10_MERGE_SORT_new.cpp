//  ---------------------------- :            MERGE SORT                    : ------------------------------- //

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

void Merge(int arr[], int low, int mid, int high)
{
    int firstArraySize = low + mid + 1;
    int secondArraySize = high - mid;

    int firstArray[firstArraySize];
    int secondArray[secondArraySize];

    for (int i = 0; i < firstArraySize; i++)
    {
        firstArray[i] = arr[i - low];
    }
    for (int j = 0; j < secondArraySize; j++)
    {
        secondArray[j] = arr[mid + j + 1];
    }

    int i = 0, j = 0, m = low;

    while (i < firstArraySize && j < secondArraySize)
    {
        if (firstArray[i] < secondArray[j])
        {
            arr[m++] = firstArray[i++];
        }
        else
        {
            arr[m++] = secondArray[j++];
        }
    }
    while (i < firstArraySize)
    {
        arr[m++] = firstArray[i++];
    }
    while(j < secondArraySize)
    {
        arr[m++] = secondArray[j++]; 
    }
}

//  merge sort algorithm  : - - - - - - - - -- - - -  -- - -   -- - -  --  -- -- - - - -
void mergeSort(int a[], int low, int high)
{
    if (low >= high)
    {
        return;
    }

    int mid;
    mid = (low + high) / 2;
    mergeSort(a, low, mid);
    mergeSort(a, mid + 1, high);
    Merge(a, low, mid, high);
}
//  main function : ---------
int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    int a[n+1];
    //  inserting the element of the array : -----
    cout << "Enter the element of the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // printing the unsorted array : ---------
    cout << "Unsorted array is : ";
    printArray(a, n);

    //  mergeSort algorithm call : ----------

    int low = 0;
    int high = n - 1;
    mergeSort(a, low, high);
    cout << "Sorted array is : ";
    printArray(a, n);
}