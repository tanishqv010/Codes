#include <stdio.h>

int count(char arr[]);

int main()
{
    char name[100];
    printf("Enter your name : ");
    fgets(name, 100, stdin);
    printf("The entered name contains %d letters(including spaces, if any).", count(name));
    return 0;
}

int count(char arr[])
{
    int count = 0;
    for(int i = 0; arr[i] != '\0'; i++){
        count++;
    }
    return count - 1;
}