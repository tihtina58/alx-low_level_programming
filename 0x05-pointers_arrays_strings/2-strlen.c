#include "holberton.h"
/**
 * _strlen - returns the length of a string
 * @s: integer pointer to be tested
 * Return: length of s
 */
int _strlen(char *s)
{
int i, count = 0;
for (i = 0; *s != '\0'; i++)
{
count++;
}
return (count);
}
