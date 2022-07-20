#include "main.h"

/**
 * p1 - obtains the length
 * @a: string
 * @l: integer
 *
 * Return: on success 1
 * on error -1
 */
int p1(char *a, int l)
{
	if (*a == 0)
		return (l - 1);
	return (p1(a + 1, l + 1));
}
/**
 * p2 - compares string
 * @a: string
 * @l: length
 *
 * Return: on success 1
 * on error -1
 */

int p2(char *a, int l)
{
	if (*a != *(a + l))
		return (0);
	else if (*a == 0)
		return (1);
	return (p2(a + 1, l - 2));
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to evaluate
 *
 * Return: on success 1
 * on error -1
 */
int is_palindrome(char *s)
{
	int l;

	l = p1(s, 0);
	return (p2(s, l));
}
