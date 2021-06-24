#include "holberton.h"
/**
 * print_triangle - prints triangle
 * @size: size and integer
 * Return: none
 */
void print_triangle(int size)
{
int i, j, k;
if (size <= 0)
_putchar('\n');
else
{
for (i = size; i > 0; i--)
{
for (j = i; j > 1; j--)
_putchar(' ');
for (k = 0; k <= size - i; k++)
_putchar('#');
_putchar('\n');
}
}
}
