#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 *main - check if the number n is negative, positive or zero
 *
 *Return: Always (Sucess)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
 int l = n % 10;
 if (l > 5)
{
  printf("Last digit of %d", n, "is %d", l, "and is greather than 5");
}
 else if (l == 0)
{
  printf("Last digit of %d", n, "is %d", l, "and is 0");
}
 else if (l < 6 && l != 0)
{
  printf("%d is negative\n", n, "is %d", l, "and is less than 6 and not 0");
}
return (0);
}
