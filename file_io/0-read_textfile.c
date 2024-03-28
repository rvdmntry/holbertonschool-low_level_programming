#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output.
 * @filename: The name of the file to be read.
 * @letters: The number of letters it should read and print.
 * Return: The actual number of letters it could read and print,
 *	   or 0 if the file cannot be opened or read, if filename is NULL,
 *	   or if write fails or does not write the expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n_read, n_written;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters + 1));
	if (!buffer) {
		close(fd);
		return (0);
	}

	n_read = read(fd, buffer, letters);
	if (n_read == -1)
{
		close(fd);
		free(buffer);
		return (0);
	} 

	buffer[n_read] = '\0';

	n_written = write(STDOUT_FILENO, buffer, n_read);
	if (n_written == -1 || n_written != n_read)
{
		close(fd);
		free(buffer);
		return (0);
	}

	close(fd);
	free(buffer);

	return (n_written);
}
