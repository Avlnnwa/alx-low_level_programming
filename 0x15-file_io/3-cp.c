#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * error_file - Checks if the files can be opened & exit on error.
 * @file_from: File descriptor for file_from.
 * @file_to: File descriptor for file_to.
 * @argv: Arguments vector.
 * Return: No return.
 */

void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s/n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s/n", argv[2]);
		exit(99);
	}
}

