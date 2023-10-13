#include <stdio.h>

void main()
{
    char c = 'a';
    printf("%c\n", c);

    int a[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        printf("%d", a[i]);
        printf("\n");
    }
}