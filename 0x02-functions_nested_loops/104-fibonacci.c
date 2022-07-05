#include <stdio.h>

/**
 * main - prints the first 98 fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
int count;
unsigned long fib1 = 0, fib2 = 1, sum;
unsigned long fh1, fh2, fh3, fh4, hf1, hf2;

for (count = 0; count < 92; count++)
{
sum = fib1 + fib2;
printf("%lu, ", sum);

fib1 = fib2;
fib2 = sum;
}
fh1 = fib1 / 10000000000;
fh3 = fib2 / 10000000000;
fh2 = fib1 % 10000000000;
fh4 = fib2 % 10000000000;

for (count = 93; count < 99; count++)
{
hf1 = fh1 + fh3;
hf2 = fh2 + fh4;
if (fh2 + fh4 > 9999999999)
{
hf1 += 1;
hf2 %= 10000000000;
}

printf("%lu%lu", hf1, hf2);
if (count != 98)
	printf(", ");

fh1 = fh3;
fh2 = fh4;
fh3 = hf1;
fh4 = hf2;
}
printf("\n");
return (0);
}
