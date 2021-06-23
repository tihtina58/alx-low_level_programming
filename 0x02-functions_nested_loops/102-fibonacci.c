#include "holberton.h"

/**
 * main -print the first 50 numbers
 * Return: 0
 */
int main(void)
{
int i = 0;
long k = 2, j = 1;
while (i < 50)
{
if (i == 0)
{
printf("%ld", j);
}
else if (i == 1)
{
printf(", %ld", k);
}
else
{
k += j;
j = k - j;
printf(", %ld", k);
}
++i;
}
printf("\n");
return (0);
}
