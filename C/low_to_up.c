#include <stdio.h>
#include <string.h>

int main(){
    char str[1000], upc[1000];
    printf("Enter the string in lowercase : ");
    gets(str);
    for(int i = 0; str[i]; i++){
        upc[i] = toupper(str[i]);
    }
    printf("Entered string in uppercase : ");
    puts(upc);
    return 0;
}