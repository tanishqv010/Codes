#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c, D, p, q;
    printf("Enter coefficient of x^2 : ");
    scanf("%d", &a);
    printf("Enter coefficient of x^1 : ");
    scanf("%d", &b);
    printf("Enter coefficient of x^0 : ");
    scanf("%d", &c);
    D = b * b - 4 * a * c;
    if(D < 0){
        printf("Imaginary Roots");
    }else{
        p = (- b + sqrt(D))/(2 * a);
        q = (- b - sqrt(D))/(2 * a);
    }
    printf("Roots : %d and %d", p, q);
    return 0;
}