#include "main.h"
/**
 * times_table - a function taht prints 9 times table starting wiht 0
 *row = row, col = column, d = digits
 * Return: times table
 * add extra space
 */
void times_table(void)
{
int row, col, d;
for (row = 1; row <= 9; row++)
{
_putchar('0');
_putchar(',');
_putchar(' ');
for (col = 0; col <= 9; col++)
{
d = (row * col);
if ((d / 10) > 0)
{
	_putchar((d / 10) + '0');
}
else
{
_putchar(' ');
}
_putchar((d % 10) + '0');
if (col < 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
