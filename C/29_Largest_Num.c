#include <stdio.h>

int main()
{
    int max, arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    max = arr[0];
    for(int i = 0; i < 10; i++){
        if(arr[i] >= max){
            max = arr[i];
        }
    }
    printf("The largest number in the array is %d", max);
    return 0;
}