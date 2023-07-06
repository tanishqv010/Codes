#include <stdio.h>

int main()
{
    int n, N, r, i, c, sum, temp;
    printf("Enter a number: ");
    scanf("%d", &N);
    n = 0;
    sum = 0;
    temp = N;
    while(N > 0){
        N /= 10;
        n++;
    }
    N = temp;
    while(N > 0){
        r = N % 10;
        c = r;
        for(i = 1; i < n; i++){
            c = c * r;
        }
        sum += c;
        N /= 10;
    }
    N = temp;
    if(sum == N){
        printf("The number is an Armstrong Number");
    }else{
        printf("The number is not an Armstrong Number");
    }
    return 0;
}