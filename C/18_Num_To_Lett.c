#include <stdio.h>
#include <math.h>

int main()
{
    int num, n, temp, i;
    printf("Enter a number : ");
    scanf("%d", &num);
    n = 0;
    temp = num;
    for(i = 0; num != 0; i++){
        num /= 10;
        n++;
    }
    for(n; n > 0; n--){
        num = temp;
        num /= pow(10, n-1);
        temp -= num * pow(10, n-1);
        switch(num){
            case 1 :
            printf("one ");
            break;
            case 2 :
            printf("two ");
            break;
            case 3 :
            printf("three ");
            break;
            case 4 :
            printf("four ");
            break;
            case 5 :
            printf("five ");
            break;
            case 6 :
            printf("six ");
            break;
            case 7 :
            printf("seven ");
            break;
            case 8 :
            printf("eight ");
            break;
            case 9 :
            printf("nine ");
            break;
            case 0 :
            printf("zero ");
            break;
        }
    }
    return 0;
}
