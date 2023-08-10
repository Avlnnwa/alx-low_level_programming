#include "main.h"

#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function allocates memory with the use malloc
 * @b: the size of memory space to allocate in bytes
 * Return: void pointer
 */

void *malloc_checked(unsigned int b)

{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)

	{
		exit(98);
	}
	return (ptr);
}
