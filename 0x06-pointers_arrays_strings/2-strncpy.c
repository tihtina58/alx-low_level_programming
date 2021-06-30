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
i = j = 0;
while ((*(dest + i) = *(src + j)) && i <= n)
{
i++;
j++;
}
return (dest);
}
