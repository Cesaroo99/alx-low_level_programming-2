#include <stdlib.h>

char *_memcpy(char *dest, char *src, unsigned int n)

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
	char *p;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	p = malloc(new_size);

	if (p == NULL)
		return (NULL);

	if (ptr == NULL)
		return (p);

	p = _memcpy(p, ptr, (new_size > old_size ? old_size : new_size));
	free(ptr);
	return (p);
}

/**
 * _memcpy - copies the memory
 * @dest: the destination
 * @src: the source pointer
 *
 * Return: The pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
