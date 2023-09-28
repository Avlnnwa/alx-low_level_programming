#include "main.h"

/**
 * flip_bits - Returns the number of bits to flip to get from n to m
 * @n: First number to be flipped
 * @m: Second number to be flipped
 * Return: The number of bits flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x_or = n ^ m;
	unsigned int test = 0;

	while (x_or > 0)
	{
		test += x_or & 1;
		x_or >>= 1;
	}
	return (test);
}
