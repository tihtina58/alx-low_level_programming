#include "holberton.h"
/**
 * print_diagonal - prints diagon
 * @n: integer to be tested
 * Return: none
 */
void print_diagonal(int n)
{
while (n--)
{
if (n <= 0)
{
_putchar('\n');
break;
}
else
{
_putchar(92);
_putchar('\n');
}
}
}
