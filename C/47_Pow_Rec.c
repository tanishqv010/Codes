#include <stdio.h>

int power(int a, int b);

int main()
{
    int n, m;
    printf("Enter base : ");
    scanf("%d", &n);
    printf("Enter power : ");
    scanf("%d", &m);
    printf("Result : %d", power(n, m));
    return 0;
}

int power(int a, int b){
    if(b == 1){return a;}
    int p;
    p = a * power(a, b - 1);
    return p;
}