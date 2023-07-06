#include <stdio.h>

void insert(int arr[], int n);

int main()
{
    int n, arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    n = 9;
    insert(arr, n);
    for(int i = 0; i <= n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}

void insert(int arr[], int n)
{
    for(int i = 0; i <= n; i++){
        if(i != n){
            continue;
        }else{
            arr[n] = 9;
        }
    }
}