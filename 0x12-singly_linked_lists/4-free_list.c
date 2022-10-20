#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head: A pointer to the list_t list.
 * Return: no return.
 */
void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
