#include "main.h"

/**
 * print_rev - a function that prints a string in reverse
 * @s: str input
 * Return: string
 */
void print_rev(char *s)
{

	int ctr = 0, i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
	ctr++;
	}

	for (n = (ctr - 1); n >= 0; n--)
	{
	
		_putchar(s[n]);
	}

	_putchar('\n');
}
