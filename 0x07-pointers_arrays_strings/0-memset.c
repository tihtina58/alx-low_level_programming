#include "holberton.h"
/**
 * _memset - fills memory with a constant byte
 * @b: The character to fill the memory area with.
 * @s: A pointer to the memory area to be filled
 * @n: The number of bytes to be filled
 * Return: A pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int index;
for (index = 0; index < n; index++)
*(s + index) = b;
return (s);
}
