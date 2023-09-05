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
ssize_t byte_read, byte_write;
char *buf;

if (filename == NULL)
	return (0);

fd = open(filename, ORDONLY);
if (fd == -1)
	return (0);

buf = malloc(sizeof(char) * letters);
if (buf == NULL)
{
	close(fd);
	return (0);
}

byte_read = read(fd, buf, letters);
if (byte_read == -1)
{
	close(fd);
	free(buf);
	return (0);
}

byte_write = write(STDOUT_FILENO, buf, byte_read);
if (byte_write == -1 || byte_write != byte_read)
{
	close(fd);
	free(buf);
	return (0);
}
close(fd);
free(buf);

return (byte_write);
}
