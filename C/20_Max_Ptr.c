#include <stdio.h>

int max(int *x, int *y);

int main()
{
    int a, b;

    printf("Enter 1st number : ");
    scanf("%d", &a);

    printf("Enter 2nd number : ");
    scanf("%d", &b);

    printf("Greater number is %d", max(&a, &b));
    return 0;
}

int max(int *x, int *y)
{
    if(*x > *y){
        return *x;
    }else if(*x < *y){
        return *y;
    }
}