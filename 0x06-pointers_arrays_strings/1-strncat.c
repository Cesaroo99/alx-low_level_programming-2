#include "main.h"

/**
 * _strncat - conceatenates two strings
 * @dest: the destination value
 * @src: the source value
 * @n: the limit of the concatenation
 *
 * Return: A pointer to the resulting string destination
 */
char *_strncat(char *dest, char *src, int n)
{

	int d = 0, j = 0;
	while (dest[d])
	{
	d++;
	}

	while (j < n && src[j])
	{
	dest[d] = src[j];
	d++;
	j++;
	}

	dest[d + n + 1] = '\0';

	return (dest);
}
