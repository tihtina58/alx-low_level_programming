#include "holberton.h"

/**
 * leet - encodes a string into 1337
 * @str: string to encode
 *
 * Return: address of str
 */
char *leet(char *str)
{
char a[] = "AaEeOoTtLl";
char b[] = "4433007711";
int i = 0, j;
while (*(str + i))
{
for (j = 0; j <= 9; j++)
{
if (*(str + i) == a[j])
*(str + i) = b[j];
}
i++;
}
return (str);
}
