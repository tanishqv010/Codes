#include <stdio.h>

int main(){
    int n, m, exp = 1;
    printf("Enter base number : ");
    scanf("%d", &n);
    printf("Enter exponent : ");
    scanf("%d", &m);
    for(int i = 0; i < m; i++){
        exp *= n;
    }
    printf("%d ^ %d = %d", n, m, exp);
    return 0;
}