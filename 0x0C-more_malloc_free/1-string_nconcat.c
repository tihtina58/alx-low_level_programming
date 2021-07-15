#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - Function that concatenates two strings.
 * @s1: String 1.
 * @s2: String 2.
 * @n: Bytes from s2.
 *
 * Return: Pointer to the array or NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
  char *k;
  int i;
  unsigned int j;

  if (s1 == NULL)
    {
      s1 = "";
    }
  if (s2 == NULL)
    {
      s2 = "";
    }
  i = 0;
  while (s1[i] != '\0')
    {
      i++;
    }
  k = malloc(sizeof(char) * (i + n + 3));
  if (k == NULL)
    {
      return (NULL);
    }
  i = j = 0;
  while (s1[i] != '\0')
    {
      k[i] = s1[i];
      i++;
    }
  while (j < n && s2[j] != '\0')
    {
      k[i] = s2[j];
      i++, j++;
    }
  k[i] = '\0';
  return (k);
}
