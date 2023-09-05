#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file to append to.
 * @text_content: The text content to append.
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_r;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (test_content != NULL)
	{
		write_r = write(fd, text_content, strlen(text_content));
		if (write_r == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
