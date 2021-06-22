#include "holberton.h"

/**
 * main -print the first 50 numbers
 * Return: 0
 */
int main(void)
{
int i, n;
long f1, f2, next;
f1 = 1;
f2 = 2;
n = 50;
for (i = 0; i < n; i++)
{
if (i == 49)
{
_putchar(f1 + 48);
}
else
{
_putchar(f1 + 48);
_putchar(',');
_putchar(' ');
next = f1 + f2;
f1 = f2;
f2 = next;
}
}
_putchar('\n');
return (0);
}
