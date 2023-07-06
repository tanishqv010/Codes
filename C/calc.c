#include <stdio.h>

int main(){
    char s;
    float a, b, f;
    printf("Enter sign(+, -, *, /) : ");
    scanf("%c", &s);
    printf("a : ");
    scanf("%f", &a);
    printf("b : ");
    scanf("%f", &b);
    switch(s){
        case '+':
            printf("%f %c %f = %f\n", a, s, b, a+b);
            break;
        case '-':
            printf("%f %c %f = %f\n", a, s, b, a-b);
            break;
        case '*':
            printf("%f %c %f = %f\n", a, s, b, a*b);
            break;
        case '/':
            printf("%f %c %f = %f\n", a, s, b, a/b);
            break;
        default:
            printf("Enter a valid operator\n");
            break;
    }
    return 0;
}