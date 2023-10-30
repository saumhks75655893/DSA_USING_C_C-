// ------------------------------------------------- :  DELETE FROM HEAP AND MAKE IT AGAIN A MAX HEAP : ----------------------------------
#include <iostream>
using namespace std;

// class for heap(insert the element) : ----------
class heap
{
public:
    int a[1000];
    int size;

    heap()
    {
        a[0] = -1;
        size = 0;
    }
    //  insert function : ----------
    void insert(int val)
    {
        size = size + 1;
        int index = size;
        a[index] = val;

        while (index > 1)
        {
            int parent = index / 2;
            if (a[parent] < a[index])
            {
                // swap parent and index values : ----
                int temp = a[parent];
                a[parent] = a[index];
                a[index] = temp;
                // now index is parent : -----
                index = parent;
            }
            else
            {
                return;
            }
        }
    }
    //  display function for array : ----------
    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << a[i] << "  ";
        }
        cout << endl;
    }

    // DELETE FROM HEAP AND MAKE IT AGAIN A MAX HEAP : ---------------------------
    void deleteFromHeap()
    {
        if (size == 0)
        {
            cout << "Nothing to delete ...... ";
        }

        // step 1 : put last element into first index
        a[1] = a[size];

        // step 2 : remove last element
        size--;

        // step 3 : take root node to its correct position
        int i = 1;
        while (i < size)
        {
            int leftIndex = 2 * i;
            int rightIndex = 2 * i + 1;

            if (leftIndex < size && a[i] < a[leftIndex])
            {
                swap(a[leftIndex], a[i]);
                i = leftIndex;
            }
            else if (rightIndex < size && a[i] < a[rightIndex])
            {
                swap(a[i], a[rightIndex]);
                i = rightIndex;
            }
            else
            {
                return;
            }
        }
    }
};

//  main function : ----------
int main()
{

    int num, n;
    cout << "Enter the size of the heap : ";
    cin >> n;
    heap h; // object declaration for the heap class.
    for (int i = 1; i <= n; i++)
    {
        cout << "Enter the number to insert : ";
        cin >> num;
        h.insert(num);
    }
    // print after inserting element : -------
    // print before delete element : -----
    h.print();

    // delete function call : -----
    h.deleteFromHeap();
    // print after delete element : -------
    h.print();
    return 0;
}