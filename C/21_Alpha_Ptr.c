#include <stdio.h>

void alpha(char *ptr);

int main ()
{
    char ch = 'a';
    alpha(&ch);
    return 0;
}

void alpha(char *ptr)
{
    for(int i = 0; i < 26; i++){
        *ptr = 'a' + i;
        printf("%c ", *ptr);
    }
}