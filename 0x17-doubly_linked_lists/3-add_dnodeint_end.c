#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a node to the end of a linked list
 * @head: double pointer to the beginning of the linked list
 * @n: value to add to new node
 * Return: pointer to the new node, or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *count, *temp;

	if (head == NULL)
		return (NULL);
	count = malloc(sizeof(dlistint_t));
	if (count == NULL)
		return (NULL);
	count->n = n;
	count->next = NULL;
	if (*head == NULL)
	{
		count->prev = NULL;
		*head = count;
		return (count);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = count;
	count->prev = temp;
	return (count);
}
