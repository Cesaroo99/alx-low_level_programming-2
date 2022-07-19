#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s; input
 * Return: string and in reverse
 */
void rev_string(char *s)
{

	char rev = s[0];
	int ctr = 0, i;

	while (s[ctr] != '\0')
	{
	ctr++;
	}
	for (i = 0; i < ctr; i++)
	{
	ctr--;
	rev = s[i];
	s[i] = s[ctr];
	s[ctr] = rev;
	}
}
