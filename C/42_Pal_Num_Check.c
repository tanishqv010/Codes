#include <stdio.h>
#include <math.h>

int main()
{
    int num, rev = 0, rem, temp, n = 0;
    printf("Enter a number : ");
    scanf("%d", &num);
    temp = num;
    for(n = 0; num > 0; n++){
        num /= 10;
    }
    num = temp;
    for(int j = 1; num > 0; j++){
        rem = num % 10;
        rev += rem * pow(10, n - j);
        num /= 10;
    }
    num = temp;
    if(rev == num){
        printf("The number %d is a palindrome number", num);
    }else{
        printf("The number %d is not a palindrome number", num);
    }
    return 0;
}