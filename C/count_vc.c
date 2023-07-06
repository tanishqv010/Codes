#include <stdio.h>

int main(){
    char str[1000];
    printf("Enter a string : ");
    gets(str);
    int n = 0, v = 0;
    for(int i = 0; str[i]; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            n++;
        }
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] =='o' || str[i] == 'u'){
            v++;
        }
    }
    printf("Number of vowels : %d\n", v);
    printf("Number of consonants : %d\n", n - v);
    return 0;
}