#include <stdio.h>
#include <string.h>

int main(){
    char str1[1000], str2[1000];
    printf("Enter a string : ");
    gets(str1);
    strcpy(str2, str1);
    printf("Copied string : ");
    puts(str2);
    return 0;
}