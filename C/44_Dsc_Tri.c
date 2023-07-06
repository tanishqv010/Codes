#include <stdio.h>
#include <conio.h>

int main()
{
    int n, arr[100], max;
    printf("Enter number of digits you want : ");
    scanf("%d", &n);
    printf("\nEnter any digit from 1 to 9\n");
    for(int i = 0; i < n; i++){
        printf("Digit %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            if(arr[i] <= arr[j]){
                max = arr[i];
                arr[i] = arr[j];
                arr[j] = max;
            }
        }
    }
    printf("\n\nFollowing is the descending triangle.\n\n");
    for(int i = 0; i < n; i++){
        for(int j = n; j >= i; j--){
            printf(" ");
        }
        for(int j = 0; j <= i; j++){
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    getch();
    return 0;
}