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
unsigned int x;
x = n;
if (n < 0)
{
_putchar(45);
x = -n;
}
if (x / 10)
{
print_number(x / 10);
}
_putchar((x % 10) + '0');
}
}
