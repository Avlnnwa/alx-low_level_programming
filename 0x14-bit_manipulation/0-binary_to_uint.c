#include "main.h"

/**
 * binary_to_unit - To convert binary to unsigned int
 * @b: Point to the string 0 and 1 chars
 * Return: The coverted number
 */

unsigned int binary_to_unit(const char *b)
{
int a;
unsigned int ans = 0;
if (!b)
return (0);
for (a = 0; b[a]; a++)
{
if (b[a] < '0' || b[a] > '1')
return (0);
ans = 2 * ans + (b[a] - '0');
}
return (ans);
}
