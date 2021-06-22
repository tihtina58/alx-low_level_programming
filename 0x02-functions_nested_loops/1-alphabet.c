#include "holberton.h"

/**
 * main - check the code for Alx school students
 *
 * Return: Always 0
 */
int mian(void)
{
print_alphabet();
return (0);
}
void print_alphabet(void)
{
char t;
for (t = 'a'; t <= 'z'; t++)
{
_putchar(t);
}
_putchar('\n');
}
