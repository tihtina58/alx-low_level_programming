#include "lists.h"

/**
 * print_list -  prints all the elements of a list_t list
 * @h: head
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
size_t *st = 0;
while (h != NULL)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%d] %s", h->len, h->str);
}
st++;
h = h->next;
}
return (st);
}
