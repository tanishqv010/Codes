#include <stdio.h>

int main()
{
    char str[1000], str2[1000];
    int i , j , k, l, m, n, max, count[1000], count2[1000];

    printf("Enter a string : ");
    fgets(str, 1000, stdin);
    printf("\n");

    for(i = 0; str[i]; i++){
        count[i] = 1;
        for(j = i + 1; str[j]; j++){
            if(str[i] == str[j]){
                count[i]++;
            }
        }
    }
    max = count[0];
    for(k = 0; count[k]; k++){
        if(count[k] > max){
            max = count[k];
        }
    }
    l = 0;
    m = 0;
    while(count[l]){
        if(count[l] == max){
            str2[m] = str[l];
            count2[m] = count[l];
            m++;
        }
        l++;
    }
    for(n = 0; count2[n]; n++){
        printf("'%c' ", str2[n]);
    }
    printf("occurs %d times in the string.", max);
    return 0;
}