#include "lists.h"

/**
 * add_nodeint_end - adds an element at the end of a list
 * @head: a pointer to the pointer to the starting node of a list
 * @n: the data to be added to the end of the list
 * Return: a pointer to the newly added element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *temp;

	ptr = *head;
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = temp;
	}
	return (*head);
}
