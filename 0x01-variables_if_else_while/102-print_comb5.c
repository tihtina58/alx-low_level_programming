#include <stdio.h>

/**
 *main - print two two digit numbers 
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
int i, j, k, l;
for (i = '0'; i <= '9'; i++)
{
for (j = '0'; j <= '9'; j++)
{
for (k = '0'; k <= '9'; k++)
{
for (l = '0'; l <= '9'; l++)
{
if (j > l)
{
continue;
}
if(i == '0' && j == '0' && k == '0' && l == '0')
{
continue;
}
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
