#include "holberton.h"

/**
 * print_sign - display signs
 * @n: integer to be checked
 * Return: 1, 0 or -1
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
