#include "holberton.h"
/**
 * print_most_numbers - print 0 to 9 except 2 and 4
 * Return: none
 */
void print_most_numbers(void)
{
int c;
for (c = 48; c <= 57; c++)
{
if (c == 50 || c == 52)
continue;
}
else
{
_puchar(c + '0');
}
}
_putchar('\n');
}
