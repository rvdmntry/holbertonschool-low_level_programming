#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

void close_file(int fd);
int open_source_file(char *file);
int open_destination_file(char *file);
void copy_contents(int from, int to);

/**
 * main - Copies the content of a file to another file.
 * @argc: Number of arguments passed to the program.
 * @argv: Array of arguments.
 * Return: Always 0 (Success), or exits with a specific error code.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open_source_file(argv[1]);
	file_to = open_destination_file(argv[2]);

	copy_contents(file_from, file_to);

	close_file(file_from);
	close_file(file_to);

	return (0);
}

void close_file(int fd)
{
	if (close(fd) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

int open_source_file(char *file)
{
	int fd = open(file, O_RDONLY);
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		exit(98);
	}
	return fd;
}

int open_destination_file(char *file)
{
	int fd = open(file, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return fd;
}

void copy_contents(int from, int to)
{
	int rd, wr;
	char buffer[BUFFER_SIZE];

	while ((rd = read(from, buffer, BUFFER_SIZE)) > 0)
	{
		wr = write(to, buffer, rd);
		if (wr != rd)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
			exit(99);
		}
	}

	if (rd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		exit(98);
	}
}
