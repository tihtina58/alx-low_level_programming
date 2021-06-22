#include "holberton.h"
/**
 * main - print to 98
 * 
 * Return: 0
 */
void print_to_98(int n)
{
int i;
if (n <= 98)
{
for (i = n; i <= 98; i++)
{
_putchar(i + '0');
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
_putchar(i + '0');
if (i != 98)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
