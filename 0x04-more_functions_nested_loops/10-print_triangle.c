#include "holberton.h"
/**
 * print_triangle - prints triangle
 * @size: size and integer
 * Return: none
 */
void print_triangle(int size)
{
if (size <= 0)
_putchar('\n');
else
{
for (int i = 1; i <=size; i++)
{
for (int j = size - 1; j >= i; j--)
_putchar(' ');
for (int k = 1; k <= i; k++)
_putchar('#');
_putchar('\n');
}
}
}
