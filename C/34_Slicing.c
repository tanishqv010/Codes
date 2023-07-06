#include <stdio.h>

void slice(char str[], int m, int n);

int main()
{
    char word[] = "HelloWorld";
    slice(word, 3, 6);
    return 0;
}

void slice(char str[], int m, int n)
{
    char newstr[100];
    int i, j;
    for(i = m, j = 0; i <= n; i++, j++){
        newstr[j] = str[i]; 
    }
    newstr[j] = '\0';
    puts(newstr);
}