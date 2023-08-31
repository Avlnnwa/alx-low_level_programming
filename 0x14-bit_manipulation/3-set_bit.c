#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Points to the number in which to set the bit.
 * @index: The index of the bit to be set.
 * Return: 1 if it works, -1 if otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n |= (1UL << index);

	return (1);
}
