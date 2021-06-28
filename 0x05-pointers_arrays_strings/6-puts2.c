#include "holberton.h"
/**
 * puts2 -  prints every other character of a string
 * @str: char parameter to be tested
 * Return: none
 */
void puts2(char *str)
{
int len, i = 0;
len = 0;
while (str[len] != '\0')
{
len++;
}
while (i < len)
{
_putchar(*str);
str += 2;
i += 2;
}
_putchar('\n');
}
