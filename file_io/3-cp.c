#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

/**
 * main - Copies the content of a file to another file.
 * @argc: Number of arguments passed to the program.
 * @argv: Array of arguments.
 * Return: Always 0 (Success), or exits with a specific error code.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, rd, wr;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to < 0)
	{
		close(file_from);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while ((rd = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		wr = write(file_to, buffer, rd);
		if (wr != rd)
		{
			close(file_from);
			close(file_to);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (rd < 0)
	{
		close(file_from);
		close(file_to);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (close(file_from) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	if (close(file_to) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}

	return (0);
}
