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

int mergeSort(int a[], int low, int mid, int high)
{
    ;
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
    int mid = (low + high) / 2;
    mergeSort(a, low, mid, high);
}