#include <stdio.h>
#include <math.h>

int b(int d);

int main(){
    int d;
    printf("Enter a decimal Number : ");
    scanf("%d", &d);
    printf("Binary for %d is %d", d, b(d));
    return 0;
}

int b(int d){
    if(d == 0){
        return 0;
    }else{
        return d % 2 + 10 * b(d / 2);
    }
}