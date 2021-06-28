#include "holberton.h"
/**
 * print_array - prints n elements of an array of integers
 * @a: integer pointer
 * @n: number of elements of the array
 * Return: none
 */
void print_array(int *a, int n)
{
for (int i = 0; i < n; i++)
{
if (i != n - 1)
printf("%d, ", a[i]);
else
printf("%d", a[i]);
}
}
