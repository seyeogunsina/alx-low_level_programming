#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - prints the contents of a linked list
 * @h: a pointer to the linked list
 * Return: the number of items in the list
 */
size_t print_listint(const listint_t *h)
{
	listint_t *ptr;

	ptr = h;
	size_t i = 0;

	while (ptr != NULL)
	{
		i++;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (i);
}
