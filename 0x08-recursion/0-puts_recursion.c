#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a new line, recursively.
 * @s: The string to be printed.
 */
void _puts_recursion(char *s)
{
if (*s == '\0') /* Base case: end of string */
{
_putchar('\n'); /* Print new line */
return;
}

_putchar(*s); /* Print current character */
_puts_recursion(s + 1); /* Recursively call with next character */
}

