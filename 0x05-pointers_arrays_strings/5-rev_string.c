#include "holberton.h"
/**
 * rev_string -  reverses a string.
 * @s: integer pointer
 * Return: none
 */
void rev_string(char *s)
{
int count = 0;
for (int i = 0; s[i]; i++)
{
count++;
}
for (int j = count - 1; j >= 0; j--)
{
_putchar(s[j]);
}
}
