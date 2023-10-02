#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file to append to.
 * @text_content: The text content to append.
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
int fd, write_r, count_let;
if (!filename)
return (-1);
fd = open(filename, O_WRONLY | O_APPEND);

if (fd == -1)
return (-1);
if (text_content)
{
for (count_let = 0; text_content[count_let]; count_let++)
write_r = write(fd, text_content, count_let);
if (write_r == -1)
{
close(fd);
return (-1);
}
}
close(fd);
return (1);

}
