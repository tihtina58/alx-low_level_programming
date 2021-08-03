#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: head
 * Return: no elements
 */
size_t listint_len(const listint_t *h)
{
size_t s = 0;
while (h)
{
s++;
h = h->next;
}
return (s);
}
