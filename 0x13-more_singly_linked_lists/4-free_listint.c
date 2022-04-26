#include "lists.h"

/**
 * free_listint - frees listint_t list
 *
 * @head: the head of the linked list
 */

void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		head = head->next;
		free(head);
	}
}
