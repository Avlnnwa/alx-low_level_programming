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
if (filename == NULL)
	return (0);
int fd == open(filename, O_RDONLY);

if (fd == -1)
	return (0);
char *buf = malloc(letters);
if (buf == NULL)
{
	close(fd);
	return (0);
}
ssize_t bytes_read = read(fd, buffer, letters);
if (bytes_read == -1)
{
	close(fd);
	free(buf);
	return (0);
}
ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
if (bytes_write == -1 || bytes_write != bytes_read)
{
	close(fd);
	free(buf);
	return (0);
}
close(fd);
free(buf);
return (bytes_write);

}
