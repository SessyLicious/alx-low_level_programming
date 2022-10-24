#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked list
 * @head: head of a list.
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int cur;

	if (*head == NULL)
		return (0);
	tmp = *head;
	cur = (*head)->n;
	*head = (*head)->next;
	free(tmp);
	return (cur);
}
