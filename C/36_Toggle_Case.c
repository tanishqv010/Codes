#include <stdio.h>

void Toggle(char str[]);

int main(){
    char str[100];
    printf("Enter a word : ");
    scanf("%s", str);
    Toggle(str);
    return 0;
}

void Toggle(char str[])
{
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] -= 32;
        }else if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] += 32;
        }else{
            continue;
        }
    }
    printf("Toggle case for the entered word is %s", str);
}