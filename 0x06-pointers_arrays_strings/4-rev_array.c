#include "holberton.h"
/**
 * reverse_array - reverse array
 * @a: array integer to be reversed
 * @n: integers to be tested
 * Return: none
 */
void reverse_array(int *a, int n)
{
  int j = 0, x;
int i = n - 1;
while (i > j)
{
x = *(a + j);
*(a + j) = *(a + i);
*(a + i) = x;
j++;
i--;
}
}
