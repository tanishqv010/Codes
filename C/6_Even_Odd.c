#include <stdio.h>

int main ()
{
    int N;

    printf("Enter the number you wish to check: ");
    scanf("%d", &N);

    printf("%d", N % 2 == 0);

    // 1 means the number is even and 0 means the number is odd

    return 0;
}