#include <stdio.h>

int count(int arr[], int n);

int main()
{
    int n, arr[] = {1,2,3,3,4,5,6,5,7,4,5,9};
    printf("Enter a numeber : ");
    scanf("%d", &n);
    printf("%d occurs %d times.", n, count(arr, n));
    return 0;
}

int count(int arr[], int n)
{
    int count = 0;
    for(int i = 0; i < 12; i++){
        if(arr[i] == n){
            count++;
        }
    }
    return count;
}