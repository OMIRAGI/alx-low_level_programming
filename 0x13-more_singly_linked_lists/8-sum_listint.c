#include "lists.h"

/**
 * sum_listint - Function sums all the interger
 * value of each nodes
 * @head: Struct pointer;
 * Return: Value of the sumed total
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);

}
