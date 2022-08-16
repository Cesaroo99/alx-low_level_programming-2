#include "lists.h"

/**
 * listint_len - returns the number
 * @h: pointer to the list
 * Return: number
 * */
size_t listint_len(const listint_t *h)
{
	const listint_t *node = h;
	size_t cont = 0;

	while (node)
	{
		cont++;
		node = node-<next;
	}
	return (cont);
}
