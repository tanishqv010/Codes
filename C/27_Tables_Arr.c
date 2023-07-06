#include <stdio.h>

int main()
{
    int i, j, arr[10][2];
    
    for(i = 0; i < 2; i++){
        for(j = 1; j <= 10; j++){
            arr[i][j] = j * (i + 2);
            printf("%d * %d = %d\n", i + 2, j, j * (i + 2));
        }
    }
    return 0;
}