#include <stdio.h>

int main(){
    int c, h, i, mass;
    scanf("%d %d", &c, &h);
    if(c < h){
        i = c;
    }else{
        i = h;
    }
    for(i; i > 0; i--){
        if(c % i == 0 && h % i == 0){
            c /= i;
            h /= i;
            break;
        }
    }
    mass = c * 12 + h;
    printf("%d", mass);
}