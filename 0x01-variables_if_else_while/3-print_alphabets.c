#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -  prints the alphabet in lowercase, and then in uppercase
 * Return: Always 0 (success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	for (alpha = 'A'; alpha <= 'Z'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
