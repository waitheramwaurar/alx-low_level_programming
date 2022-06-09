#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of the list
 * @head: the start of the list
 * @n: the new node
 *
 * Return: the address of the new element, NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_elem;

	new_elem = malloc(sizeof(dlistint_t));

	if (!new_elem)
		return (NULL);
	new_elem->n = n;
	new_elem->next = NULL;

	dlistint_t last_node;

	if ((*head)->next == NULL)
		last_node = *head;
	else
	{
		while (last_node->next)
		{
			last_node = last_node->next;
		}
	}
	new_elem->prev = last_node;
	return (new_elem);
}
