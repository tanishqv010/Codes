#include <stdio.h>

int main()
{
    int a , b;
    
    printf("Enter two numbers (seperated by comma(,)): ");
    scanf("%d , %d", &a , &b);

    if(a < b) {printf("%d", a);}

    else if (b < a) {printf("%d", b);}

    return 0;
}