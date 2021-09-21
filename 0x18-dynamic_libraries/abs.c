#include "main.h"

/**
 * _abs - compute abs
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
a = a * -1;
return (a);
}
}
