#include "main.h"

/**
 * free_listint2 - a function that frees a listint_t list
 * @head: pointer to the list head 
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while ((temp = *head) != NULL)
	{
		*head = *head->next;
		free(temp);
	}
	*head = NULL;
}
