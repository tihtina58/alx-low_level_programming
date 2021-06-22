#include "holberton.h"

/**
 * main - print holberton
 *
 * Return: Always 0
 */

int main(void)
{
char a[9] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n'};
unsigned int i;
for (i = 0; i < sizeof(a); i++)
{
_putchar(a[i]);
}
_putchar('\n');
return (0);
}
