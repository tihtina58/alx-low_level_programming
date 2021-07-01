#include "holberton.h"

/**
 * cap_string - Write a function that capitalizes all words of a string.
 * @str: string to encode
 *
 * Return: address of str
 */
char *cap_string(char *str)
{
char a[] = " \t\n,;.!?\"(){}";
int i = 0, j;
while (*(str + i))
{
if (*(str + i) >= 'a' && *(str + i) <= 'z')
{
if (i == 0)
*(str + i) -= 32;
else
{
for (j = 0; j <= 12; j++)
{
if (*(str + i - 1) == a[j])
*(str + i) -= 32;
}
}
i++;
}
return (str);
}
