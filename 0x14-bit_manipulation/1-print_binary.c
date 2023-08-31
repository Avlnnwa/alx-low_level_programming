#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to be printed in binary
 * Return: no return
 */

void print_binary(unsigned long int n)
{
unsigned long int a = 1UL << (sizeof(unsigned long int) * 8 - 1);

int print_binary = 0;

while (a)
{
if (n & a)
{
_putchar('1');
print_binary = 1;
}

else if (print_binary)
{
_putchar('0');
}
a >>= 1;
}

if (!print_binary)
	_putchar('0');

}
