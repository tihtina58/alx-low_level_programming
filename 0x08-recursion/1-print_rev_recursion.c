 #include “holberton.h”
/**
 * _print_rev_recursion – prints a string
 * @s: pointer of a string to be tested
 * Return: none
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
_print_rev_recursion(s + 1);
_putchar(*s);
}
