#include "holberton.h"

/**
 * rot13 - encodes a string using rot13.
 * @str: string to capitalize
 *
 * Return: address of str
 */
char *rot13(char *str)
{
int i = 0;
while (*(str + i))
{
if (*(str + i) >= 'a' && *(str + i) <= 'z')
{
if (*(str + i) >= 'a' && *(str + i) <= 'm')
*(str + i) += 13;
else
*(str + i) -= 13;
}
else if (*(str + i) >= 'A' && *(str + i) <= 'Z')
{
if (*(str + i) >= 'A' && *(str + i) <= 'M')
*(str + i) += 13;
else
*(str + i) -= 13;
}
i++;
}
return (str);
}
