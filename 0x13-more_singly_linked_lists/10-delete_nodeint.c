#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node
 * @head: pointer
 * @index: position
 * Return: 1 or -1
 */
int dlete_nodeint_at_index(listint_t **head, unsigned int index)
{
	list_t *aux_node = *head;
	listint_t *node_to_delete = *head;
	unsigned int idx;
	unsigned it cont = 0;

	if (!(*head))
		return (-1);

	if (index == 0)
	{
		*head = node_to_delete->next;
		free(node_to_delete);
		return (1);
	}

	idx = index - 1;
	while (aux_node && cont != idx)
	{
		cont++;
		aux_node = aux_node->next;
	}

	if (cont == idx && aux_node)
	{
		node_to_delete = aux_node->next;
		aux_node->next = node_to_delete->next;
		free(node_to_delete);
		return (1);
	}
	return(-1);
}
