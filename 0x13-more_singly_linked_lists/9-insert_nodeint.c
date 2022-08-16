#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * @head: pointer
 * @idx: position
 * @n: data
 * Return: the address
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *aux_node = *head;
	listint_t *new_node;
	unsigned int index;
	unsigned int cont = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}

	index = idx - 1;
	while (aux_node && cont != index)
	{
		cont++;
		aux_node = aux_node->next;
	}

	if (cont == index && aux_node)
	{
		new_node->next = aux_node->next;
		aux_node->next = new_node;
		return (new_code);
	}
	free(new_node);
	return (NULL);
}
