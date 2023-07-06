#include <stdio.h>

int main()
{
    char str[100];
    printf("Enter a str (in lowercase) : ");
    scanf("%d", str);
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            count++;
        }else{
            continue;
        }
    }
    printf("Number of vowels in the word %s are %d", str, count);
    return 0;
}