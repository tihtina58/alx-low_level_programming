#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: string 1 pointer
 * @s2: string 2 pointer
 * Return: null or pointer
 */
char *str_concat(char *s1, char *s2)
{
char *ar;
unsigned int size1, size2, i, j;
i = j = size1 = size2 = 0;
while (s1[size1] != '\0')
size1++;
while (s2[size2] != '\0')
size2++;
size2++;
if (s1 == NULL)
size1 = 0;
if (s2 == NULL)
size2 = 0;
ar = malloc(sizeof(*s1) * (size1 + size2));
if (ar == NULL)
return (NULL);
else
{
while (i < size1)
{
ar[i] = s1[i];
i++;
}
while (j <= size2)
{
ar[i] = s2[j];
i++;
j++;
}
return (ar);
}
}
