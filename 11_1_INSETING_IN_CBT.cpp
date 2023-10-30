//  insert element in a heap : ------

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
    }
};

//  main function : ----------
int main()
{

    int num;
    heap h; // object declaration for the heap class.
    for (int i = 1; i <= 10; i++)
    {
        cout << "Enter the number to insert : ";
        cin >> num;
        h.insert(num); 
    }
    h.print();
    return 0;
}