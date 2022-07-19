#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints n elt
 * @a: array
 * @n: number of elt
 * Return: inputs
 */
void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
	for (i = 0; i <= n; i++)
	{
		printf("%d", a[i]);
		if (i == (n - 1))
		{
			break;
		}
		printf(", ");
	}
	}
	printf("\n");
}
