#include "main.h"

/**
 * factorial - gets factorial of a given value
 * @n: integer
 *
 * Return: on success 1
 * on error -1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
