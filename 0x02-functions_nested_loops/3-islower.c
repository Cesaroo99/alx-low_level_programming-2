#include "main.h"
/**
 * _islower is a function that checks for lowercase character
 * @c: input
 * Return: 1 if int c is lowercase, 0 if else
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
	return (1);
else
	return (0);
}
