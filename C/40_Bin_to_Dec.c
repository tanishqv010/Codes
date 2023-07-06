#include <stdio.h>
#include <math.h>

int main(){
    int bin, rem, dec = 0;
    printf("Enter a number in binary number system : ");
    scanf("%d", &bin);
    for(int i = 0; bin != 0; i++){
        rem = bin % 10;
        dec += rem * pow(2,i);
        bin /= 10;
    }
    printf("The number enetred is %d in decimal number system", dec);
    return 0;
}