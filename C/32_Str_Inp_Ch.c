#include <stdio.h>

int main()
{
    char ch, str[100];
    int i = 0;
    printf("Enter your name then press enter\n");
    
    while(ch != '\n'){
        scanf("%c", &ch);
        str[i] = ch;
        i++;
    }
    str[i] = '\0';
    printf("Your name is %s", str);
    return 0;
}