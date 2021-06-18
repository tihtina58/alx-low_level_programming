#include <stdio.h>

/**
 *main - print a-z exept q and e
 *
 *Return: 0
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
if (c == 'e' || c == 'q')
{
continue;
}
putchar(c);
}
putchar('\n');
return (0);
}
