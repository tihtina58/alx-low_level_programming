#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - prints a name
 * @name: string
 * @f: function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
  while (size != 0)
    {
      (*action)(*array);
      size--;
      array++;
    }
}
