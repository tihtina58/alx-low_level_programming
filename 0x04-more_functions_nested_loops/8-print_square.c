#include "holberton.h"
/**
 * print_square - prints square
 * @size: intger value and size of the square
 * Return: none
 */
void print_square(int size)
{
while (size--)
{
if (size <= 0)
{
_putchar('\n');
break;
}
else
{
while (size--)
{
_putchar('#');
}
_putchar('\n');
}
}
}
