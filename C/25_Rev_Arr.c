#include <stdio.h>

int revArr(int arr[], int n);
void printArr(int arr[], int n);

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    revArr(arr, 5);
    printArr(arr, 5);
    return 0;
}

int revArr(int arr[], int n)
{
    int temp;
    for(int i = 0; i < n/2; i++){
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    return arr;
}

void printArr(int arr[], int n)
{
    for(int i = 0; i < n; i++){
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}