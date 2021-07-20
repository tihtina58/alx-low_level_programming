#include "function_pointers.h"

/**
 * array_iterator - xecutes a function given as a parameter on each
 * element of an array.
 * @array: array of intege
 * @size: size of array
 * @action: function pointer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
  int i = 0;
  if (size <= 0 && array == NULL)
    return (-1);
      while (i < size)
	{
	  if (cmp(array[i]))
	    return (i);
	  i++;
	}
      return (-1);  
}
