#include "lists.h"

/**
 * print_listint - prints the contents of a linked list
 * @h: a pointer to the linked list
 * Return: the number of items in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
