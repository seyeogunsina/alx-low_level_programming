#include "lists.h"

/**
 * sum_listint - sums the elements of a list
 * @head: a pointer to the head node
 * Return: the sum of list elements
 */
int sum_listint(listint_t *head)
{
	int tot;
	
	tot = 0;

	while (head != NULL)
	{
		tot += head->n;
		head = head->next;
	}
	return (tot);
}
