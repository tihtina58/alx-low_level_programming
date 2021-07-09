#include "holberton.h"

/**
 * _islower - return 1 if lower case else 0
 * @c: integer to be tested
 * Return: Always 0
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
