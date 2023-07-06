#include <stdio.h>

int main()
{
    float price[3];
    printf("Enter three prices.\n");
    printf("Price 1 : ");
    scanf("%f", &price[0]);
    printf("Price 2 : ");
    scanf("%f", &price[1]);
    printf("Price 3 : ");
    scanf("%f", &price[2]);

    printf("Total price 1 : %f\n", 1.18*price[0]);
    printf("Total price 2 : %f\n", 1.18*price[1]);
    printf("Total price 3 : %f\n", 1.18*price[2]);

    return 0;
}