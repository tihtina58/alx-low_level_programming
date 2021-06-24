#include "holberton.h"
/**
 * print_numbers : print from 0 to 9
 *
 * Return: void
 */
void print_numbers(void)
{
int c = 0;
while (c <= 9)
{
_putchar(c + '0');
}
_putchar('\n');
}
