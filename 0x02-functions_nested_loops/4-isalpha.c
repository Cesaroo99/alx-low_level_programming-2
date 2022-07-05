#include "main.h"
/**
 * _isalpha is a function that checks for alphbetic character
 * @c: input
 * Return: 1 if c is a letter and 0 if else
 */
int _isalpha(int c)
{
if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
	return (1);
else
	return (0);
}
