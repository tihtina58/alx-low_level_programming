#include "holberton.h"
/**
 * print_times_table - print n times table
 * @n: integer
 */
void print_times_table(int n)
{
if (n > 15 || n < 0)
{
return ;
}
int i, j, pro;
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
pro = i * j;
if (j == 0)
{
_putchar(48);
continue;
}
_putchar(',');
_putchar(' ');
if (pro >= 10)
{
_putchar(pro / 10 + 48);
_putchar(pro % 10 + 48);
}
else
{
_putchar(' ');
_putchar(pro + 48);
}
}
_putchar('\n');
}
}
