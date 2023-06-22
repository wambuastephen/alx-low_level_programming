#include "main.h"

/**
 * _isdigit - checks if a character is a digit
 * @d: the character to be checked
 * Return: 1 for a digit otherwise 0.
 */
int _isdigit(int d)
{
if (d >= 48 && d <= 57)
{
return (1);
}
else
{
return (0);
}
}
