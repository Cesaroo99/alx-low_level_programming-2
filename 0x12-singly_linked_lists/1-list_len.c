#include "lists.h"
/**
 * list_len - returns the number of slt
 * @h: points to the head
 * Return: size_t
 */
size_t list_len(const list_t *t)
{
	int nodes = 0;

	while (h)
	{
		nodes += 1;
		h = h->next;
	}
	return (nodes);
}
