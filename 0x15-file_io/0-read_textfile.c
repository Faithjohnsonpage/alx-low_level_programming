#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to STDOUT.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, nb_read;
	char *ch;

	ch = (char *)malloc(sizeof(char) * letters);
	if (ch == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(ch);
		return (0);
	}

	nb_read = read(fd, ch, letters);
	if (nb_read == -1)
	{
		free(ch);
		close(fd);
		return (0);
	}

	ch[nb_read] = '\0';

	write(STDOUT_FILENO, ch, nb_read);

	close(fd);
	free(ch);
	return (nb_read);
}
