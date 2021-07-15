#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - a function that allocates memory
 * @b: the number of bytes to be allocated
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
void *m = malloc(b);
if (m == NULL)
exit(98);
return (m);
}
