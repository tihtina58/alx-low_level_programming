#include "holberton.h"
/**
 * print_to_98 - print
 */
void print_to_98(int n)
{
int i;
if (n <= 98)
{
for (i = n; i <= 98; i++)
{
printf("%i, ", i);
}
}
else
{
for (i = n; i >= 98; i--)
printf("%i, ", i);
}
}
_putchar('\n');
}
