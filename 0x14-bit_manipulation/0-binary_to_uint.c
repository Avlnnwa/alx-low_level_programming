#include "main.h"

/**
 * binary_to_unit - To convert binary to unsigned int
 * @b: Point to the string 0 and 1 chars
 * Return: The coverted number
 */

unsigned int binary_to_unit(const char *b)
{
	unsigned int i;
	int len;
	int base;

	if (!b)
		return (0);
	i = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, base = 1; len >= 0; len--, base *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);

		}
		if (b[len] & 1)
		{
			i += base;
		}
	}
	return (i);
}
