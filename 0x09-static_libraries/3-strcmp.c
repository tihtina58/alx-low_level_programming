#include "holberton.h"

/**
 * _strcmp - appends src to the dest string
 * @s1: string to append by src
 * @s2: string to append to dest
 *
 * Return: address of dest
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
while (*(s1 + i) && *(s2 + i) && (*(s1 + i) == *(s2 + i)))
i++;
return (*(s1 + i) -*(s2 + i));
}
