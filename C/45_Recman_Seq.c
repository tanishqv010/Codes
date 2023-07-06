#include <stdio.h>

void rec(int n);
int main()
{
    int n, r;
    printf("Enter the number of terms you want : ");
    scanf("%d", &n);
    rec(n);
    return 0;
}

void rec(int n){
    int arr[n], i, check, j;
    for(i = 1; i <= n; i++){
        arr[0] = 0;
        check = arr[i - 1] - i;
        for(j = 0; j < i; j++){
            if(arr[j] == check || check < 0){
                check = arr[i - 1] + i;
                break;
            }
        }
        arr[i] = check;
        printf("%d  ", arr[i]);
    }
}