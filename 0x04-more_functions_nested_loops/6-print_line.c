#include "holberton.h"
/**
 * print_line - prints underscore
 * @n: integer to be tested
 * Return: none
 */
void print_line(int n)
{
while (n > 0)
{
if (n <= 0)
break;
else
_putchar('_');
n--;
}
_putchar('\n');
}
