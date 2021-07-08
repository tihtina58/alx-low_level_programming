 #include “holberton.h”
/**
 * _strlen_recursion – prints the length of a string 
 * @s: pointer of a string to be tested
 * Return: the length of a string 
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}
