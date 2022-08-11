#include "list.h"
#include <string.h>

/**
 * add_node_end - adds nodes at the end
 * @haed: points to the head
 * @str: the string to input
 * Return: pointer to new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *last;
	unsigned int i;

	if (!(head && str))
		return (NULL);

	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);

	newNode->str = strdup(str);
	for (i = 0; str[i]; i++)
	{}
	newNode->len = i;
	newNode->next = NULL;

	if (!*head)
	{
		*head = newNode;
		return (newNode);
	}

	last = *head;
	while (last->next)
	{
		last = last->next;
	}
	last->next = newNode;
	return (newNode);
}
