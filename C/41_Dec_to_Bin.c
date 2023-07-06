#include <stdio.h>
#include <math.h>

int main(){
    int dec, bin = 0, rem;
    printf("Enter a number in decimal number system : ");
    scanf("%d", &dec);
    for(int i = 0; dec != 0; i++){
        rem = dec % 2;
        bin += rem * pow(10,i);
        dec /= 2;
    }
    printf("The number entered is %d in binary number system", bin);
    return 0;
}