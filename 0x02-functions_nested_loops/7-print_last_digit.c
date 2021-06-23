#include "holberton.h"

/**
 * _abs - absolute value of a number
 * @n: integer to be tested
 * Return: return abs value
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
/**
 * print_last_digit - prints the last digit
 * @n: integer to be tested
 * Return: the last digit
 */
int print_last_digit(int n)
{
n = _abs((n % 10));
_putchar(n + 48);
return (n);
}
