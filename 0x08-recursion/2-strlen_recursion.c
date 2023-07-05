#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string using recursion.
 * @s: The string to measure the length of.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
if (*s == '\0') /* Base case: end of string */
return 0;

return 1 + _strlen_recursion(s + 1); /* Recursively call with next character */
}

