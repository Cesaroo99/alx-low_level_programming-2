#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth
 * @head: pointer
 * @index: nth node
 * Return: nth
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int cont = 0;

	while (node && cont != index)
	{
		cont++;
		node = node->next;
	}
	if (node && cont == index)
		return (node);
	return (NULL);
}
