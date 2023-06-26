#include "main.h"
/**
 * _strcpy - copies a string
 * @dest: the destination value.
 * @src: its the source of value
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
