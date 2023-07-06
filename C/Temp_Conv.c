#include <stdio.h>

int main(){
    float T;
    char u;
    printf("Enter Unit(C or F) : ");
    scanf("%c", &u);
    printf("Enter Temperature : ");
    scanf("%f", &T);
    switch(u){
        case 'C':
            printf("Temperature in F : %f C", 1.8 * T + 32);
            break;
        case 'F':
            printf("Temperature in C : %f F", (T - 32) / 1.8);
            break;
    }
    return 0;
}