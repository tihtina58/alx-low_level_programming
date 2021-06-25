#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 *main - check if the number n is negative, positive or zero
 *
 *Return: Always (Sucess)
 */
void positive_or_negative(int i)
{
if (i > 0)
{
printf("%d is positive\n", i);
}
else if (i == 0)
{
printf("%d is zero\n", i);
}
else
{
printf("%d is negative\n", i);
}
 
}
