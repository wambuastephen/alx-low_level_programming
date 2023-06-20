#include "main.h"

/**
 * _isalpha - Checks if a character is an alphabet (a-z or A-Z).
 * @c: The character to check.
 *
 * Return: 1 if the character is an alphabet, 0 otherwise.
 */


int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))

return (1);

else

return (0);
}
