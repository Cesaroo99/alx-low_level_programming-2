#include "lists.h"

/**
 * pop_listint - deletes the head
 * @head: pointer
 * Return: head
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *first_node = *head;

	if (!first_node)
		return (0);

	data = (*head)->n;
	*head = first_node->next;
	free(first_node);
	return (data);
}
