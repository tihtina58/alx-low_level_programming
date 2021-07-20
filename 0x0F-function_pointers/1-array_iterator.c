#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - executes a function given as a parameter
 * @size: size of array
 * @array: array
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array != NULL && action != NULL)
{
while (size != 0)
{
(*action)(*array);
size--;
array++;
}
}
}
