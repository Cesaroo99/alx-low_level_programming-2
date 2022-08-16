#include "lists.h"

/**
 * sum_listint - sum of all data
 * @head: pointer
 * Return: sum of all
 */
int sum_listint(listint_t *head)
{
	listint_t *node = head;
	int sum = 0;

	while (node)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
