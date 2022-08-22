#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * create_file - check the code
 * @filename: name of the file
 * @text_content: number
 * Return: Always 0
 */

int create_file(const char *filename, char *text_content)
{
	int id = 0, wr = 0, i = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
		{}
	}
	id = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (id == -1)
	{
		return (-1);
	}
	wr = write(id, text_content, i);

	if (wr == -1)
	{
		return (-1);
	}
	close(id);
	return (1);
}
