#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a list
 * @idx: the target index
 * @n: the new node data
 * Return: a pointer to the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned i;
	listint_t *ptr;
	listint_t *temp;

	ptr = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && ptr != NULL; i++)
		{
			ptr = ptr->next;
		}
	}

	if (ptr == NULL && idx != 0)
		return (NULL);

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;

	if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
	}
	else
	{
		temp->next = ptr->next;
		ptr->next = temp;
	}
	return (temp);
}
