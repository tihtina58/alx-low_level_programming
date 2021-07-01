#include "holberton.h"

/**
 * _strncpy - appends src to the dest string
 * @dest: string to append by src
 * @src: string to append to dest
 * @n: integer
 * Return: address of dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i, j;
i = 0;
while (*(src + i) && i < n)
{
*(dest + i) = *(src + i);
i++;
}
while (i < n)
{
*(dest + i) = '\0';
i++;
}
return (dest);
}
