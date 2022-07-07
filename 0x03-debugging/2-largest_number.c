#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first number
 * @b: second
 * @c: third
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
int l;

if (a > b && b > c)
	l = a;
else if (a > b && b < c)
{
if (a > c)
	l = a;
else
	l = c;
}
else if (b > a && a > c)
	l = b;
else if (b > a && a < c)
{
if (b > c)
	l = b;
else
	l = c;
}
else if (a == b && a == c)
	l = a;
else
{
if ((a == b && a > c) || (a == c && a > b) || (b == c && a > b))
	l = a;
else if ((a == c && a < b) || (b == c && a < b))
	l = b;
else
	l = c;
}
return (l);
}
