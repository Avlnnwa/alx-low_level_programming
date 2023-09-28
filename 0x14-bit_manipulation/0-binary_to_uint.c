#include "main.h"

/**
 * binary_to_unit - To convert binary to unsigned int
 * @b: Point to the string 0 and 1 chars
 * Return: The coverted number
 */

unsigned int binary_to_unit(const char *b)
{
	unsigned int a = 0;

	if (!b)
		return (0);
	while (*b == '0' || *b == '1')
	{
		a <<= 1;
		a += (*b - '0');
		b++;
	}

	if (*b != '\0')
		return (0);
	return (a);
}
