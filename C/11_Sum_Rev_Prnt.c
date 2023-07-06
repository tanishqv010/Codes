#include <stdio.h>

int main()
{
  int n, sum = 0;

  printf ("Enter the upper limit for Summation : ");
  scanf ("%d", &n);

  printf("Numbers in descending order:");

  for (int i = n; i >= 1; i--)
    {
      sum += i;
      printf (" %d", i);
    }

  printf ("\nSum : %d", sum);

  return 0;
}