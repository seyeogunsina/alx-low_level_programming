#include "lists.h"

/**
 * pop_listint - removes the head element of a list
 * @head: a pointer to the head element
 * Return: the head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *curr;
	int i;

	if (*head == NULL)
		return (0);

	curr = *head;
	i = curr->n;

	temp = curr->next;
	free(curr);
	*head = temp;

	return (i);
}
