//  --------------------  : BINARY SERACH ALGORITHM : --------------------------- :

#include <iostream>
using namespace std;

int main()
{
    int search, n;
    // Taking the number input from user
    cout << "Enter the number of array's item : ";
    cin >> n;

    // initializing the array
    int a[n];
    //  taking input from the user for the array's elements.
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    // Printing the element of the array.
    cout << "\nThe array is : \n"
         << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << i << "th element is : " << a[i] << endl;
    }

    // Taking input of Searching element

    cout << "\n\nEnter the element to search : ";
    cin >> search;
    int Beg = 1;
    int End = n;

    // Binary search algorith (non - recursive)
    if (a[Beg] <= a[End])
    {
        while (Beg <= End)
        {
            int mid = int((Beg + End) / 2);
            if (a[mid] == search)
            {
                cout << search << " found at the position : " << mid;
                break;
            }
            else if (search < a[mid])
            {
                End = mid - 1;
            }
            else
            {
                Beg = mid + 1;
            }
        }
    }
}