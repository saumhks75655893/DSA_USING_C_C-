//  ------------------------ :            MERGE SORT                    : ------------------------------- //

#include <bits/stdc++.h>
#include<vector>
using namespace std;

//  printing function for array : ---------
void printArray(vector<int> arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << "\n";
}

//  merge function : -----------

void Merge(vector<int> &arr, int low, int mid, int high)
{
    int i, j;
    vector<int> temp;
    i = low;
    j = mid + 1;
    while (i <= mid && j <= high)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }
    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }
    while (j <= high)
    {
        temp.push_back(arr[j]);
        j++;
    }
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

//  merge sort algorithm  : - - - - - - - - -- - - -  -- - -   -- - -  --  -- -- - - - -
void mergeSort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int mid;
        mid = int((low + high) / 2);
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        Merge(arr, low, mid, high);
    }
}
//  main function : ---------
int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    vector<int> a;
    //  inserting the element of the array : -----
    cout << "Enter the element of the array : ";
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        a.push_back(num);
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

    return 0;
}