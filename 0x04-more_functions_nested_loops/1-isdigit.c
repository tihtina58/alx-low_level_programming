#include "holberton.h"
/**
 * _isdigit - check if c is between 0 and 9
 * @c: integer to be tested
 * Return: 0 or 1
 */
int _isdigit(int c)
{
if (c >= 0 && c <= 9)
{
return (1);
}
else
{
return (0);
}
}
