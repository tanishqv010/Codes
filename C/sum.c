#include <stdio.h>

int main(){
    int num, rem, sum = 0;
    printf("Enter a number : ");
    scanf("%d", &num);
    for(int i = 0; num != 0;i++){
        rem = num % 10;
        num /= 10;
        sum += rem;
    }
    printf("Sum of digits = %d\n", sum);
    return 0;
}