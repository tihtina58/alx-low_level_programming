#include "holberton.h"
/**
 * more_numbers - print 0 to 14 10 times
 * Return: none
 */
void more_numbers(void)
{
int i, c;
for (i = 1; i <= 10; i++)
{
for (c = 0; c <= 14; c++)
{
if (c >= 0 && c <= 9)
{
_putchar(c + '0');
}
else
{
_putchar((c / 10) + '0');
_putchar((c % 10) + '0');
}
}
_putchar('\n');
}
}
