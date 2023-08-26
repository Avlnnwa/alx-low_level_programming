#include <stdio.h>

/**
 * pre_main - function executed before main
 * main: c predefined function
 * Return: no return.
 */

void pre_main(void)
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}

int main(void)
{
	pre_main(void);
	return (0);
}
