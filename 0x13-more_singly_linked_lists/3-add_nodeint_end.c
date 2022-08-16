#include "lists.h"

/**
 * add_nodeint_end - adds a new node
 * @head: pointer
 * @n: integer
 * Return: adrress oor NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *aux = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (aux)
	{
		while (aux->next)
			aux = aux->next;
		aux->next = new;
	}
	else
		*head = new;
	return (new);
}
