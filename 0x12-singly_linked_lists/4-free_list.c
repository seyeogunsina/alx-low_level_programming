#include "lists.h"

/**
 * free_list - frees the memory taken by a list
 * @head: pointer to the list head
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
