#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - Creates a file and writes a text to it.
 * @filename: The name of the file to create.
 * @text_content: A NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int status = 1;
	ssize_t len = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
{
		while (text_content[len])
			len++;
		if (write(fd, text_content, len) != len)
			status = -1;
	}

	close(fd);
	return (status);
}
