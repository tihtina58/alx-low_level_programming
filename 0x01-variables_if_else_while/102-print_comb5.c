#include <stdio.h>

/**
 *main - 2 digits
 *
 *return: 0
 */
int main(void)
{
int i, j, k, l;
for (i = '0'; i <= '9'; i++)
{
for (j = '0'; j <= '9'; j++)
{
for (k = i; k <= '9'; k++)
{
for (l = j + 1; l <= '9'; l++)
{
putchar(i);
putchar(j);
putchar(' ');
putchar(k);
putchar(l);
if (i != '9' || j != '8' || k != '9' || l != '9')
{
putchar(',');
putchar(' ');
}
}
}
}
}
return (0);
}
