// nth FIBONACCI NUMBER  : -------------

#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the number of n : ";
    cin >> n;
    int a = 0;
    int b = 1;
    int c = 0;
    for (int i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    cout << "The " << n << "th position number is " << c << endl;
}
