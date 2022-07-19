#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: input
 * Return: length of the input
 */
int _strlen(char *s)
{

	int i = 1, sum = 0;
	char p = s[0];

	while (p != '\0')
	{
	
		sum++;
		p = s[i++];
	}
	return (sum);
}
