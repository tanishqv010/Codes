#include <stdio.h>

int main()
{
    int n, fact;
    printf("Enter the number to find factorial : ");
    scanf("%d", &n);
    fact = 1;
    if(n == 0){
        fact = 1;
    }else if(n > 0){
        for(int i = 1; i <= n; i++){
            fact = fact * i;
        }
    }
    printf("The value of %d! is : %d", n, fact);
    return 0;
}