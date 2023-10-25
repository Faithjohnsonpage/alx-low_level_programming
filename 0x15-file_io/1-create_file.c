#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include "main.h"

/**
 * create_file - Creates or truncates a file and writes text content.
 * @filename: The name of the file to create or truncate.
 * @text_content: The text content to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, nb_write;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		nb_write = write(fd, text_content, strlen(text_content));
		if (nb_write == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}