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
printf("%d", i);
if (i != 98)
{
_putchar(',');
_putchar(' ');
}
}
}
else
{
for (i = n; i >= 98; i--)
{
printf("%d", i);
if (i != 98)
{
_putchar(',');
_putchar(' ');
}
}
}
printf("\n");
}
