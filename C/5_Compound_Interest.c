#include <stdio.h>
#include <math.h>

int main()
{
    float P , R , n , A , CI , EMI;

    printf("Enter principle amount: ");
    scanf("%f", &P);

    printf("Enter Rate of Interest: ");
    scanf("%f", &R);

    printf("Enter number of years required to repay the loan: ");
    scanf("%f", &n);

    printf("Amount to be repaid: %f \n", A = P * pow( 1 + R / 100 , n ));

    printf("Interest: %f \n", CI = A - P);

    printf("Installment to be paid each month: %f \n", EMI = A / ( n * 12 ));

    return 0;
}