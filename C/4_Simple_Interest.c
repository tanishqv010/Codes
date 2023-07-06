#include <stdio.h>
#include <math.h>

int main()
{
    float P , R , T , SI , A , EMI;

    printf("Enter principle amount: ");
    scanf("%f", &P);

    printf("Enter rate of interest: ");
    scanf("%f", &R);

    printf("Enter time period(in years): ");
    scanf("%f", &T);

    printf("Simple Interest: %f \n", SI = ( P * R * T ) / 100);
    printf("Amount: %f \n", A = P + SI);
    printf("EMI: %f \n", EMI = A / (12 * T));

    return 0;
}
