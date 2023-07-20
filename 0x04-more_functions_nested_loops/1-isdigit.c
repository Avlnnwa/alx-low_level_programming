#include "main.h"
/**
 * _isdigit - checks for digits between 0 and 9
 * @c: checks for the digits within the parameter
 * Return: 1 if (0 to 9) is the number, 0 otherwise
 */

int _isdigit(int c)
{

if (c >= '0' && c <= '9')
{
return (1);
}

else
{
return (0);
}
}
