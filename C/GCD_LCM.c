#include <stdio.h>

int main(){
    int a, b, lcm, gcd, n, i;
    printf("Enter 1st number : ");
    scanf("%d", &a);
    printf("Enter 2nd number : ");
    scanf("%d", &b);
    if(a > b){
        n = a;
    }else{
        n = b;
    }
    for(i = n; i > 0; i--){
        if(a % i == 0 && b % i == 0){
            gcd = i;
            break;
        }
    }
    lcm = a * b / gcd;
    printf("LCM = %d", lcm);
    printf("GCD = %d", gcd);
    return 0;
}