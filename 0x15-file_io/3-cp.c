#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

int copy_file_func(const char *file_from, const char *file_to);
int create_new_file(const char *file_to);
void close_fd(int fd, const char *file_name);

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 */

int main(int argc, char **argv)
{
	int res;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	res = copy_file_func(argv[1], argv[2]);

	dprintf(STDOUT_FILENO, "%i\n", res);
	return (0);
}

/**
 * copy_file_func - Copies the content of one file to another.
 * @file_from: The name of the source file.
 * @file_to: The name of the destination file.
 *
 * Return: Always returns 0 on successful completion.
 */

int copy_file_func(const char *file_from, const char *file_to)
{
	int fd1, fd2;
	int nb_read, nb_write;
	char buffer[1024];

	fd1 = open(file_from, O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	fd2 = create_new_file(file_to);

	while ((nb_read = read(fd1, buffer, sizeof(buffer))) > 0)
	{
		nb_write = write(fd2, buffer, nb_read);
		if (nb_write == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
			close_fd(fd1, file_from);
			close_fd(fd2, file_to);
			exit(99);
		}
	}

	if (nb_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		close_fd(fd1, file_from);
		close_fd(fd2, file_to);
		exit(98);
	}

	close_fd(fd1, file_from);
	close_fd(fd2, file_to);

	return (0);
}

/**
 * create_file - Creates or opens a file for writing.
 * @file_to: The name of the file to create or open.
 *
 * Return: The file descriptor of the opened or created file.
 */

int create_new_file(const char *file_to)
{
	int fd2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);

	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
		exit(99);
	}
	return (fd2);
}

/**
 * close_fd - Closes a file descriptor and checks for errors.
 * @fd: The file descriptor to close.
 * @file_name: The name of the file associated with the descriptor.
 */

void close_fd(int fd, const char *file_name)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd for file %s\n", file_name);
		exit(100);
	}
}
