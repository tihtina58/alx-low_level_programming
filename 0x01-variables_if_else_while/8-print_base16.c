#include <stdio.h>

/**
 *main - print 16 base char.
 *
 *Return: Always 0 (Sucess)
 */
int main(void)
{
int i;
char c;
for (i = '0'; i <= '9'; i++)
{
putchar(i);
}
for (c = 'a'; c <= 'f'; c++)
{
putchar(c);
}
return (0);
}
