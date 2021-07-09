#include "holberton.h"
/**
 * _strspn - gets the length of a prefix substring
 * @accept: the address of memory to print
 * @s: the size of the memory to print
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int j, i;
for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
break;
}
if (!accept[j])
break;
}
return (i);
}
