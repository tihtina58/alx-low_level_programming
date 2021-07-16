#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

void _is_zero(char *argv[]);
char *initialize_array(char *ar, int len_ar);
int _checknum(char *argv[], int n);
/**
 * _is_zero - determines if any number is zero
 * @argv: argument array
 */
void _is_zero(char *argv[])
{
  int i, n1 = 1, n2 = 2;

  for (i = 0; argv[1][i]; i++)
    if (argv[1][i] != '0')
      {
	n1 = 0;
	break;
      }
  for (i = 0; argv[2][i]; i++)
    if (argv[2][i] != '0')
      {
	n2 = 0;
	break;
      }
  if (n1 == 1 || n2 == 2)
    {
      printf("0\n");
      exit(0);
    }
}

/**
 * _initialize_array - set memory to zero in a new array
 * @ar: char array.
 * @len_ar: length of the char array.
 *
 * Return: pointer to a char array.
 */
char *initialize_array(char *ar, int len_ar)
{
  int i;

  for (i = 0; i < len_ar; i++)
    *(ar + i) = '0';
  ar[len_ar] = '\0';
  return (ar);
}

/**
 * _checknum - determines length of the number and checks if the number
 * is in base 10.
 * @argv: argument array.
 * @n: row of the array.
 *
 * Return: length of the number
 */
int _checknum(char *argv[], int n)
{
  int len;

  for (len = 0; argv[n][len]; len++)
    if (!isdigit(argv[n][len]))
      {
	printf("Error\n");
	exit(98);
      }
  return (len);
}

/**
 * main - multiplies 2 positive number and prints the result.
 * @argc: argument count
 * @argv: arrays of arguments
 *
 * Return: 0 for success.
 */
int main(int argc, char *argv[])
{
  int len1, len2, lenout, add, addl, i, j, k, ca;
  char *nout;

  if (argc != 3)
    printf("Error\n"), exit(98);

  len1 = _checknum(argv, 1), len2 = _checknum(argv, 2);
  _is_zero(argv), lenout = len1 + len2, nout = malloc(lenout + 1);
  if (nout == NULL)
    printf("Error\n"), exit(98);
  nout = initialize_array(nout, lenout);
  k = lenout - 1, i = len1 - 1, j = len2 - 1, ca = addl = 0;
  for (; k >= 0; k--, i--)
    {
      if (i < 0)
	{
	  if (addl > 0)
	    {
	      add = (nout[k] - '0') + addl;
	      if (add > 9)
		nout[k - 1] = (add / 10) + '0';
	      nout[k] = (add % 10) + '0';
	    }
	  i = len1 - 1, j--, addl = 0, ca++, k = lenout - (1 + ca);
	}
      if (j < 0)
	{
	  if (nout[0] != '0')
	    break;
	  lenout--;
	  free(nout), nout = malloc(lenout + 1), nout = initialize_array(nout, lenout);
	  k = lenout - 1, i = len1 - 1, j = len2 - 1, ca = addl = 0;
	}
      if (j >= 0)
	{
	  add = ((argv[1][i] - '0') * (argv[2][j] - '0')) + (nout[k] - '0') + addl;
	  addl = add / 10, nout[k] = (add % 10) + '0';
	}
    }
  printf("%s\n", nout);
  return (0);
}
