#include "main.h"
/**
 * _strcat - function concates concates two strings.
 * @dest: is the destination string
 * @src: is the origin string.
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
int klen = 0, i;
while (dest[klen])
{
klen++;
}
for (i = 0; src[i] != 0; i++)
{
dest[klen] = src[i];
klen++;
}
dest[klen] = '\0';
return (dest);
}
