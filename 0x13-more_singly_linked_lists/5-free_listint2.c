#include "lists.h"

/**
 * free_listint2 - Function that remove memory allocated to
 * pointer head
 * @head: struct pointer
 */

void free_listint2(listint_t **head)
{
	if (*head == NULL)
		return;

	free(*head);
	*head = NULL;
}
