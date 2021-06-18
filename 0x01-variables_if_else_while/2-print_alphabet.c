#include <stdio.h>

/**
 *main - print a-z in lower case
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
char i;
for (i = 'A'; i <= 'Z'; i++)
{
putchar(i);
}
 putchar('\n');
return (0);
}
