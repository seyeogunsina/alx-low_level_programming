#include "lists.h"

/**
 * list_len - a function that returns the number of elements in a linked list
 * @h: the linked linst
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
