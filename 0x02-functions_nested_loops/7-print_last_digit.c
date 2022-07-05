#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @ld: last digit
 * Return: value of the last digit
 */
int print_last_digit(int ld)
{
int a;
a = (ld % 10);
if (a < 0)
{
a = (-1 * a);
}
_putchar(a + '0');
return (a);
}
