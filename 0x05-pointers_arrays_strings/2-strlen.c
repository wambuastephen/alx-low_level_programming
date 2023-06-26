#include <stdio.h>
/**
 * _strlen - prints the length of a given string.
 *  @str: string which its length should be returned.
 *  Return: The length of @str
 */
size_t _strlen(const char *str)
/*the function which returns length of string*/
{
size_t length = 0;
while (*str)
{
length++;
str++;
}
return (length);
}
