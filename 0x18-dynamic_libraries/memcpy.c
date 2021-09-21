#include "main.h"
/**
 * _memcpy -  copies memory area
 * @dest: memory area
 * @n: bytes from memory area to e copied
 * @src: memory area
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest);
}
