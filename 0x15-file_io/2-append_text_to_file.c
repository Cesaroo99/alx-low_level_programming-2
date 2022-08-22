#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 * append_text_to_file - check
 * @filename: name
 * @text_content: number
 * Return: Always 0
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int id = 0, wr = 0, i = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_contnent != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
		{}
	}
	id = open(filename, O_APPEND | O_WRONLY, 0600);
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
