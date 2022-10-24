#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: head of a list.
 * Return: the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tor, *har;

	if (head == NULL || head->next == NULL)
		return (NULL);
	tor = head->next;
	har = (head->next)->next;
	while (har)
	{
		if (tor == har)
		{
			tor = head;
			while (tor != har)
			{
				tor = tor->next;
				har = har->next;
			}
			return (tor);
		}
		tor = tor->next;
		har = (har->next)->next;
	}
	return (NULL);
}
