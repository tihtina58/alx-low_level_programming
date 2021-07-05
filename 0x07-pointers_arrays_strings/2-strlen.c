#include "holberton.h"
/**
 * _strlen - returns the length of a string
 * @s: integer pointer to be tested
 * Return: length of s
 */
unsigned int _strlen(char *s)
{
unsigned int count = 0;
while (*s != '\0')
{
count++;
s++;
}
return (count);
}
