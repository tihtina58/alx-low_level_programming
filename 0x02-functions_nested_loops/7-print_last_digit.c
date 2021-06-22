#include "holberton.h"

/**
 * print_last_digit - print last digit
 * _abs : absolute value of a number
 * @n: integer to be tested
 * Return: _abs return abs value the other other
 */
int _abs(int n)
{
if (n >= 0)
{
return (n);
}
else
{
return (-1 * n);
}
}
int print_last_digit(int n)
{
n = _abs((n % 10));
_putchar(n + 48);
return (n);
}
