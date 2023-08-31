#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: Point to a string of 0 and 1 chars
 * Return: The converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 0;
	unsigned int base_two = 1;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		b++;
	}

	b--;

	while (b >= 0)
	{
		if (*b == '1')
			a += base_two;

		base_two *= 2;
		b--;
	}
	return (a);
}
