#include "holberton.h"
/**
 * print_diagonal - prints diagon
 * @n: integer to be tested
 * Return: none
 */
void print_diagonal(int n)
{
if (n > 0)
{
int j = 0;
while (j < n)
{
int i;
for (i = 1; i <= j; i++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
j++;
}
}
else
{
_putchar('\n');
}
}
