#include <stdio.h>

void swap(int *a, int *b);

int main()
{
    int x, y;

    printf("x = ");
    scanf("%d", &x);
    printf("y = ");
    scanf("%d", &y);

    swap(&x, &y);

    printf("After swapping :\nx = %d\ny = %d", x, y);
    
    return 0;
}

void swap(int *a, int *b)
{
    int t = *b;
    *b = *a;
    *a = t;
}