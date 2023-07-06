#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter 1st number : ");
    scanf("%d", &a);
    printf("Enter 2st number : ");
    scanf("%d", &b);
    printf("Before swapping\na:%d\nb:%d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping\na:%d\nb:%d", a, b);
    return 0;
}