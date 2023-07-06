#include <stdio.h>
#include <string.h>

int main(){
    char str[500], temp;
    int i = 0, j =0;
    printf (" Enter a string : ");
    gets(str);
    j = strlen (str) - 1;
    while ( i < j){
        temp = str[j];
        str[j] = str[i];
        str[i] = temp;
        i++;
        j--;
    }
    printf (" The reversed of the string: %s", str);
    return 0;
}