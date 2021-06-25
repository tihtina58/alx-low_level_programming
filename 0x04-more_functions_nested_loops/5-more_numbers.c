#include "holberton.h"
/**
 * more_numbers - print 0 to 14 10 times
 * Return: none
 */
void more_numbers(void)
{
int num = 0, count = 1;
while (count <= 10)
{
while (num <= 14)
{
if (num >= 10)
{
_putchar((num / 10) + '0');
}
else
{
_putchar((num % 10) + '0');
}
num++;
}
count++;
_putchar('\n');
}
}
