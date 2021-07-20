#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stddef.h>
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int _putchar(char c);
#endif
