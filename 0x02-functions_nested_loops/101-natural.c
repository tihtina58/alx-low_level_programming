#include "holberton.h"
/**
 * main - the sum of multiple of 3 or 5
 * Return: 0
 */
int main(void)
{
int i, sum;
for (i = 0; i < 1024; i++)
{
if ( (i % 3 == 0) || (i % 5 == 0))
{
sum = 0;
sum = sum + i;
}
}
_putchar(sum);
return (0);
}
