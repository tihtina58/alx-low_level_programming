#include "holberton.h"
/**
 * print_square - prints square
 * @size: intger value and size of the square
 * Return: none
 */
void print_square(int size)
{
int j = 0;
if (size > 0)
{
int j = 0;
while (j < size)
{
int i;
for (i = 0; i < size; i++)
{
_putchar('#');
}
_putchar('\n');
j++;
}
}
else
{
putchar('\n');
}
}
