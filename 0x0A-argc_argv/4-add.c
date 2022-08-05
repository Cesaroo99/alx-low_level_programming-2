#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - returns a sum
 * @argc: number
 * @argv: array
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int i, j, l, s;
	char *ptr;

	if (argc < 2)
		printf("0\n");
	else
	{
		s = 0;
		for (i = 1; i < argc; i++)
		{
			ptr = argv[i];
			l = strlen(ptr);

			for (j = 0; j < l; j++)
			{
				if (isdigit(*(ptr + j)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			s += atoi(argv[i]);
		}
		printf("%d\n", s);
	}
	return (0);
}
