#include <stdio.h>
#include <conio.h>

int main()
{
    int n, k;
    printf("Enter the order of matrix : ");
    scanf("%d", &n);
    printf("\n");
    int arr[n][n], mir[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            k = n  - j - 1;
            printf("a%d%d : ", i+1, j+1);
            scanf("%d", &arr[i][j]);
            mir[i][k] = arr[i][j];
        }
    }
    printf("\n\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", arr[i][j]);
        }
        printf(" |  ");
        for(int j = 0; j < n; j++){
            printf("%d ", arr[i][n - j - 1]);
        }
        printf("\n");
    }
    getch();
    return 0;
}