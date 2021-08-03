#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_listint -  prints all the elements of a listint_t list
* @h: pointer to the list_t list to print
* Return: the number of nodes printed
*/
size_t print_listint(const listint_t *h)
{
size_t s = 0;
while (h != NULL)
{
printf("%i\n", h->n);
s++;
h = h->next;
}
return (s);
}
