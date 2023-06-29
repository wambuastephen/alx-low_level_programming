#include "main.h"
/**
 * _strncpy - function that copies an inputted number
 * of bytes starting from src into dest.
 * @dest: stores the string copy
 * @n:number of bytes to be copied
 * @src: the source string
 * Return: pointer to resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
int index = 0, src_len = 0;
while (src[index++])
src_len++;
for (index = 0; src[index] && index < n; index++)
dest[index] = src[index];
for (index = src_len; index < n; index++)
dest[index] = '\0';
return (dest);
}
