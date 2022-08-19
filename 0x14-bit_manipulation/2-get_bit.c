#include "main.h"

/**
 * get_bit - value
 * @n: decimal
 * @index: index
 * Return: value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int b;

	b = (n >> index);
	if (index > 32)
		return (-1);
	return (bit & 1);
}
