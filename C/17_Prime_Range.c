#include <stdio.h>

int main()
{
    int ll, ul, i, j;
    
    printf("Enter the lower limit : ");
    scanf("%d", &ll);
    
    printf("Enter the upper limit : ");
    scanf("%d", &ul);
    
    if(ul < ll){printf("Enter a valid range");}
    if(ul <= 2){printf("No prime number lies in this range");}
    for(i = ll; i < ul; i++)
    {
        if(ll < 2){
            ll = 2;
        }
        for(j = 2; j < i; j++){
            if(i % j == 0){
                break;
            }
        }
        if(i == j){printf("%d ",i);}
    }
    return 0;
}