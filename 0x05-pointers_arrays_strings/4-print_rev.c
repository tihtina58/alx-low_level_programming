#include "holberton.h"
/**
 * _strlen - returns the length of a string
 * @s: integer pointer to be tested
 * Return: length of s
 */
int _strlen(char *s)
{
int count = 0;
while (*s != '\0')
{
count++;
s++;
}
return (count);
}
/**
 * print_rev - prints a string, in reverse
 *@s: integer pointer
 * Return: none
 */
void print_rev(char *s)
{
int len, i;
len = _strlen(s);
for (i = len - 1; i >= 0; i--)
{
_putchar(*(s + i));
}
_putchar('\n');
}
