#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: The number of bytes from s2 to concatenate
 *
 * Return:pointer to newly allocated memory containing the concatenated string
 *If the function fails, it returns NULL
 *If n is greater or equal to the length of s2, the entire string s2 is used
 *If NULL is passed, it is treated as an empty string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1 = 0, len2 = 0;
unsigned int i, j;
char *concat;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[len1] != '\0')
len1++;
while (s2[len2] != '\0')
len2++;
if (n >= len2)
n = len2;
concat = malloc(sizeof(char) * (len1 + n + 1));
if (concat == NULL)
return (NULL);
for (i = 0; i < len1; i++)
concat[i] = s1[i];
for (j = 0; j < n; j++)
concat[i + j] = s2[j];
concat[i + j] = '\0';
return (concat);
}

