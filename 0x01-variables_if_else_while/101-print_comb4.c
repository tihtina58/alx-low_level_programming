#include <stdio.h>

/**
 *main -3 digit
 *
 *return: Assume 0 (Success)
 */
int main(void)
{
int j, i, k;
for (i = '0'; i <= '9'; i++)
{
for (j = i + 1; j <= '9'; j++)
{
for (k = j + 1; k <= '9'; k++)
{
putchar(i);
putchar(j);
putchar(k);
if (i != '7' || j != '8' || k != '9')
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
