#include <stdio.h>
#include "holberton.h"
/**
 * print_to_98 - pritns to 98
 * @n: integer to be tested
 * Return: 0
 */
void print_to_98(int n)
{
int i;
if (n <= 98)
{
for (i = n; i <= 98; i++)
{
printf("%d, ", i);
}
}
else
{
for (i = n; i >= 98; i--)
{
printf("%d, ", i);
}
}
printf("\n");
}
