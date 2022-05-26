#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list
 * @head: a pointer to list head
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while ((ptr = head) != NULL)
	{
		head = head->next;
		free(ptr);
	}
}
