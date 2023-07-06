#include <stdio.h>

int main()
{
    char str[1000], str2[1000];
    int k = 0;

    printf("Enter a statement : ");
    fgets(str, 1000, stdin);

    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == ' '){
            k++;
        }
        str2[i] = str[i + k];
    }
    puts(str2);
    return 0;
}