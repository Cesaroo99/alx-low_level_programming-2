#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - allocates memory block using malloc free
 * @ptr: pointer
 * @old_size: the size 1
 * @new_size: size 2
 *
 * Description: allocates a new memory block for the pointer
 *
 * Return: A pointer
 * NULL if can not allocate memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *p;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	p = malloc(sizeof(char) * new_size);

	if (p == NULL)
		return (NULL);

	if (ptr)
	{
		for (i = 0; i < old_size; i++)
		{
			p[i] = *((char *)ptr + i);
		}
	}
	free(ptr);
	return (p);
}
