#include "holberton.h"

/**
 * _isalpha - checks if its a letter
 * @c: integer to be tested
 * Return: 0 or 1
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
