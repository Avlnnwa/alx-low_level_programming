#include "main.h"

/*
 * malloc_checked - To allocate memory using malloc
 * @b: size of the memory space to allocate in bytes
 * Return: a pointer to the allocated memory
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
