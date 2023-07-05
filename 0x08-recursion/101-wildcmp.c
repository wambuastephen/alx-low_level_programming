#include "main.h"

/**
 * wildcmp - Compare two strings and check if they are identical
 * @s1: The first string
 * @s2: The second string
 *
 * Return: 1 if the strings are identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
/* Check if both strings are empty */
if (*s1 == '\0' && *s2 == '\0')
return (1);
/* Check if the current characters match */
if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));
/* Check if s2 contains '*' character */
if (*s2 == '*')
{
/* Check if s2 is followed by another character */
if (*(s2 + 1) != '\0' && *s1 == '\0')
return (0);
return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
}
return (0);
}

