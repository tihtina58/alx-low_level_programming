#include "holberton.h"

/**
 * main - checks for lowercase
 *
 * Return: 0 if its lower or 1 if not
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
