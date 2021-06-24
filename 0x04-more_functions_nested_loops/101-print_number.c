#include "holberton.c"
/**
 * print_number - print integers
 * @n: integers to be tested
 * Return: none
 */
void print_number(int n)
{
if (n > 0)
{
if (n > 0 && n <= 9)
_putchar(n + '0');
else if (n >= 10 && n <= 99)
{
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
}
else if (n >= 100 && n <= 999)
{
_putchar((i / 100) + '0');
_putchar(((i % 100) / 10) + '0');
_putchar((i % 10) + '0');
}
else if ( n >= 1000 && n <= 9999)
{
_putchar((i / 1000) + '0');
_putchar(((i % 1000) / 100 + '0');
_putchar(((i % 100) / 10) + '0');
_putchar(((i % 100) % 10) + '0');
}
}
else if ( n == 0)
_putchar('0');
else
{
if (n > 0 && n <= 9)
_putchar(n + '0');
else if (n >= 10 && n <= 99)
{
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
}
else if (n >= 100 && n <= 999)
{
_putchar((i / 100) + '0');
_putchar(((i % 100) / 10 ) + '0');
_putchar((i % 10) + '0');
}
else if (n >= 1000 && n <= 9999)
{
_putchar((i / 1000) + '0');
_putchar(((i % 1000) / 100) + '0');
_putchar(((i % 100) / 10) + '0');
_putchar(((i % 100) % 10) + '0');
}
}
}
