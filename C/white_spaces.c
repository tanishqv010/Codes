#include <stdio.h>
#include <string.h>

int main(){
    char str[1000], str2[1000];
    int n, f = 0, b = 0;
    printf("Enter a string : ");
    gets(str);
    printf("String with leading and trailing white spaces : ");
    puts(str);
    n = strlen(str);
    for(int i = 0; str[i]; i++){
        if(str[i] == ' '){
            f++;
        }else{
            break;
        }
    }
    for(int i = n - 1; str[i]; i--){
        if(str[i] == ' '){
            b++;
        }else{
            break;
        }
    }
    for(int i = f; i <= n - b; i++){
        str2[i - f] = str[i];
    }
    printf("String without leading and trailing white spaces : ");
    puts(str2);
    return 0;
}