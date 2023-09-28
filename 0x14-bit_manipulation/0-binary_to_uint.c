#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 characters.
 *
 * Return: The converted number, or 0 if there are invalid characters
 *         in the string or if the string is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int num = 0;
unsigned int i = 0;

if (b == NULL)
return (0);

while (b[i] != '\0')
{
if (b[i] == '0' || b[i] == '1')
{
num <<= 1; /* Left shift the number by 1 to make space for the next bit*/
num += (b[i] - '0'); /* Convert character '0' or '1' to corresponding integer*/
i++;
}
else
{
return (0); /* Return 0 if an invalid character is encountered*/
}
}

return (num);
}

