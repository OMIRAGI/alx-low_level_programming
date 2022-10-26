#include "lists.h"

/**
 * get_nodeint_at_index - Get node at a specific index;
 *
 * @head: Structure pointer
 * @index: index to lookup
 * Return: Node at the index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	listint_t *temp = malloc(sizeof(listint_t));

	if (head == NULL)
		return (NULL);

	temp = head;

	for (i = 0; i < index; i++)
	{
		if (temp == NULL)
		{
			return (NULL);
		}
		else
			temp = temp->next;
	}

	return (temp);
}
