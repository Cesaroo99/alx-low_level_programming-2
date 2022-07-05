#include <stdio.h>

/**
 * main - prints the sum of even-valued fibonacci sequence
 *
 * Return: Always 0
 */
int main(void)
{
unsigned long f1 = 0, f2 = 1, fs;
float ts;

while (1)
{
fs = f1 + f2;
if (fs > 4000000)
	break;

if ((fs % 2) == 0)
	ts += fs;

f1 = f2;
f2 = fs;
}
print("%.0f\n", ts);
return (0);
}
