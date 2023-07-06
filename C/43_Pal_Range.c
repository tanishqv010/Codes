#include <stdio.h>
#include <math.h>

int main()
{
    int ll, ul, num, rev, rem, temp, n = 0;

    printf("Enter lower limit : ");
    scanf("%d", &ll);
    printf("Enter upper limit : ");
    scanf("%d", &ul);
    
    for(num = ll; num <= ul; num++){
        
        rev = 0;
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
            printf("%d   ", num);
        }
    }
    
    return 0;
}