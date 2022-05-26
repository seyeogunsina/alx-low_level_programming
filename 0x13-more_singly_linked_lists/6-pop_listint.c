#include "lists.h"

/**
 * pop_listint - removes the head element of a list
 * @head: a pointer to the head element
 * Return: the head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	size_t i;

	i = *head->n;
	if (i == NULL)
		return (0);

	temp = *head;
	*head = *head->next;
	free(temp);
	return (i);
{
