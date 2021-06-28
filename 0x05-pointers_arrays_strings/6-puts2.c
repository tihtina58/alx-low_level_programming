#include "holberton.h"
/**
 * puts2 -  prints every other character of a string
 * @str: char parameter to be tested
 * Return: none
 */
void puts2(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str += 2;
}
_putchar('\n');
}
