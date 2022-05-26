#include "lists.h"

/**
 * get_nodeint_at_index - gets the node at an idex
 * @head: the head node pointer
 * @index: the index of node to be returned
 * Return: a pointer to the targeted node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i = 0;

	ptr = head;
	while (i <= index)
	{
		ptr = ptr->next;
		if (ptr == NULL && i != index)
			return (NULL);
		i++;
	}
	return (ptr);
}
