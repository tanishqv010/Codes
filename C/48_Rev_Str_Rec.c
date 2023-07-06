#include <stdio.h>

void rev(char *str, int n);

int main()
{
    char str[1000000];
    printf("Enter a string : ");
    fgets(str, 1000000, stdin);
    rev(str, 0);
    return 0;
}

void rev(char *str, int n)
{
    if(*(str + n) == '\0'){
        return;
    }
    rev(str, n + 1);
    printf("%c", str[n]);
}