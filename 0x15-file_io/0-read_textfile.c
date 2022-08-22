#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - check the cod
 * @filename: name of the file
 * @letters: number
 * Return: Always 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int id = 0;
	ssize_t wr = 0;
	ssize_t len = 0;
	char *buff = NULL;

	if (filename != NULL)
	{
		buff = malloc(letters);
		if (buff == NULL)
		{
			return (0);
		}

		id = open(filename, O_RDONLY, 0600);
		if (id == -1)
		{
			free(buff);
			return (0);
		}

		len = read(id, buff, letters);
		if (len == -1)
		{
			free(buff);
			return (0);
		}

		wr = write(STDOUT_FILENO, buff, len);
		if (wr == -1 || wr < len)
		{
			free(buff);
			return (0);
		}
		close(id);
		free(buff);
		return (wr);
	}
	return (0);
}
