 #include “holberton.h”
/**
 * factorial – prints factorial of a given number
 * @n: integer number to be tested 
 * Return: factorial of a given number
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}
