#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: integer value of the size
 * @c: char value to be assigned to the array
 * Return: null or pointer
 */
char *create_array(unsigned int size, char c)
{
unsigned int i = 0;
char *ar;
if (size == 0)
return (NULL);
else
{
ar = malloc(size * sizeof(c));
}
if (ar == NULL)
return (NULL);
else
{
while (i < size)
{
ar[i] = c;
i++;
}
return (ar);
}
}
