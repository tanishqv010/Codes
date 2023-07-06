#include <stdio.h>

int main()
{
    char str[100];
    printf("Enter a word in lowercase.\n");
    scanf("%s", str);

    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == 'a'){
            str[i] = 'A';
        }if(str[i] == 'e'){
            str[i] = 'E';
        }if(str[i] == 'i'){
            str[i] = 'I';
        }if(str[i] == 'o'){
            str[i] = 'O';
        }if(str[i] == 'u'){
            str[i] = 'U';
        }else{
            continue;
        }
    }
    printf("The word with vowels in upper case is %s", str);
    return 0;
}