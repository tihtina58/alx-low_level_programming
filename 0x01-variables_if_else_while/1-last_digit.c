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
  int n, l;

srand(time(0));
n = rand() - RAND_MAX / 2;
l = n % 10;
if (l > 5)
{
printf("Last digit of %d is %d and is greather than 5", n, l);
}
else if (l == 0)
{
printf("Last digit of %d is %d and is 0", n, l);
}
else if (l < 6 && l != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0", n, l);
}
return (0);
}
