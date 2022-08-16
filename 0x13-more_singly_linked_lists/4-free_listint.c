#include "lists.h"

/**
 * free_listint - frees a listint_t
 * @head: pointer
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *actual_node;
	listint_t *next_node;

	if (head)
	{
		actual_node = head;
		next_node = head->next;
		while (next_node)
		{

			free(actual_node);
			actual_node = next_node;
			next_node = next_node->next;
		}
		free(actual_node);
	}
}
