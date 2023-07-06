#include <stdio.h>

int main(){
    char ch = 'A', temp;
    temp = ch;
    for(int i = 6; i >= 0; i--){
        ch = temp;
        for(int j = 0; j <= i; j++){
            if(ch == 'G'){
                continue;
            }
            printf("%c", ch);
            ch++;
        }
        if(ch != 'G'){
            printf(" ");
        }
        ch = temp + i;
        for(int j = i; j >= 0; j--){
            printf("%c", ch);
            ch--;
        }
        printf("\n");
    }
    return 0;
}