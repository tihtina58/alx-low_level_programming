#include "holberton.h"

/**
 * printlastdigit - print last digit
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
