#include "function_pointers.h"

/**
 * int_index - xecutes a function given as a parameter on each
 * @array: array of intege
 * @size: size of array
 * @cmp: function pointer
 * Return: -1 or index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
if (size <= 0 || array == NULL || cmp == NULL)
return (-1);
while (i < size)
{
if (cmp(array[i]))
return (i);
i++;
}
return (-1);
}
