#include "lists.h"

/**
 * add_node - adds a node at the beginning of the linked list
 * @head: pointer to the first node of the list
 * @str: string to add to new node in the list
 * Return: NULL if it fails / starting addr of the list
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t nchar;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	for (nchar = 0; str[nchar]; nchar++)
		;
	new->len = nchar;
	new->next = *head;
	*head = new;
	return (*head);
}
