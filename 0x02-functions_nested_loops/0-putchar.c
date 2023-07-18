#include <stdio.h>
/**
 * main - print _putchar
 * Return: Always 0 (success)
 */
int main(void)
{
	char text[] = "_putchar";

	for (int i = 0; text[i] != '\0'; i++)
	{
		putchar(text[i]);
	}

	putchar('\n');
		return (0);
}

