#include "holberton.h"
/**
 * print_numbers : print from 0 to 9
 * Return: none
 */
void print_numbers(void)
{
int c;
for (c = 48; c <= 57; c++)
{
_putchar(c + '0');
}
_putchar('\n');
}
