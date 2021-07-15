#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _strlen - calculate length of a string
 * @str: string
 * Return: length of the string
 */

int _strlen(char *str)
{
  int i;

  for (i = 0; string[i] != '\0'; i++)
    {
    }
  return (i);
}

/**
 * string_nconcat - concatenate s1 with n char of s2
 * @s1: string 1
 * @s2: string 2
 * @n: number of chars to be concatinated
 * Return: pointer to the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
  char *p;
  int nn, len, i, j;

  nn = n;

  if (s1 == NULL)
    s1 = "";
  if (s2 == NULL)
    s2 = "";
  if (nn < 0)
    return (NULL);
  if (nn >= _strlen(s2))
    nn = _strlen(s2);

  len = _strlen(s1) + nn + 1;

  p = malloc(sizeof(*p) * len);
  if (p == NULL)
    return (NULL);

  for (i = 0; s1[i] != '\0'; i++)
    p[i] = s1[i];
  for (j = 0; j < nn; j++)
    p[i + j] = s2[j];
  p[i + j] = '\0';

  return (p);
}
