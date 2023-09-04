#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <stdio.h>
#include <errno.h>
#include "main.h"

/**
 * append_text_to_file - Appends text content to a file.
 * @filename: The name of the file to append to.
 * @text_content: The text content to append.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, nb_append;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		if (errno == ENOENT)
		{
			return (-1);
		}
		else if (errno == EACCES)
		{
			return (-1);
		}
		else
		{
			perror("open");
			return (-1);
		}
	}

	nb_append = write(fd, text_content, strlen(text_content));

	if (nb_append == -1)
	{
		perror("write");
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
