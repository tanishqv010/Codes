#include <stdio.h>

int main ()
{
    int n, j;

    printf ("Enter a Number : ");
    scanf ("%d", &n);

    if(n == 1){
        j = 1;
    }if(n == 2){
        j = 2;
    }if(n > 2){
        for(int i = 2; i < n; i++){
            if(n % i == 0){
                j = 1;
                break;
            }else{
                j = 2;
            }
        }
    }
    if(j == 2){printf ("The number is prime");}
    else if(j == 1){printf ("The number is not prime");}
    return 0;
}