#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: a pointer to the pointer of the first node of the list
 * @n: the data to be added to the beginning of the list
 * Return: the address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
