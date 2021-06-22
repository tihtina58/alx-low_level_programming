#include "holberton.h"

/**
 * abs - compute abs
 * @a: integer to be tested
 * Return: abs value
 */
int _abs(int a)
{
if (a >= 0)
{
return (a);
}
else
{
return (-1 * a);  
}
}
