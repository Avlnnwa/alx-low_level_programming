#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to be printed in binary
 * Return: no return
 */

void print_binary(unsigned long int n)
{
	unsigned long int test = 1UL << (sizeof(unsigned long int) * 8 - 1);

	int count = 1;

	while (test > 0)
	{
		if ((n & test) || !count)
		{
			_putchar((n & test) ? '1' : '0');
			count = 0;
		}

		test >>= 1;
	}
	if (count)
		_putchar('0);
}
