#include "holberton.h"
/**
 * swap_int - swaps the values of two integers
 * @a: integer pointer one
 * @b: integer pointer two
 * Return: none
 */
void swap_int(int *a, int *b)
{
  int sw;
  sw = *a;
  *a = *b;
  *b = sw;
}
