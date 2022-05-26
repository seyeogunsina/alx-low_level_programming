#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list
 * @head: pointer to the list head 
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
	*head = NULL;
	}
}
