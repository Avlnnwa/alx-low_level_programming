#include "main.h"

/**
 * read_textfile - Reads and prints a text file to standard ouput.
 * @filename: The name of the file to be read.
 * @letters: The number of letters to read and print.
 * Return: The actual number of letters it could read and print
 * if an error occurs, return 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t b_read, b_write;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	b_read = read(fd, buffer, letters);
	b_write = write(STDOUT_FILENO, buffer, b_read);

	close(fd);

	free(buffer);

	return (b_write);
}
