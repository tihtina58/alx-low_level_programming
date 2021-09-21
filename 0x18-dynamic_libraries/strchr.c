#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: pointer
 * @c: char to be tested
 * Return: first location of a char or null
 */
char *_strchr(char *s, char c)
{
int i = 0;
while (*s != '\0')
{
if (c == s[i])
return (s);
s++;
}
if (*s == c)
{
return (s);
}
return (0);
}
