//  HOW TO CREATE A COMPLETE BINARY TREE(CBT) : ----------------------
#include <iostream>
using namespace std;

void heapiFy(int a[], int m, int i)
{
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    if (left < m && a[largest] < a[left])
    {
        largest = left;
    }
    else if (right < m && a[largest] < a[right])
    {
        largest = right;
    }

    if (largest != i)
    {
        swap(a[largest], a[i]);
        heapiFy(a, m, largest);
    }
}

// main function : -----------
int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int m = n - 1;
    for (int i = m / 2; i > 0; i--)
    {
        heapiFy(a, m, i);
    }

    //  print the element : ----
    cout << "Printing array : ";
    for (int i = 1; i <= m; i++)
    {
        cout << a[i] << "  ";
    }
    cout << endl;
    return 0;
}