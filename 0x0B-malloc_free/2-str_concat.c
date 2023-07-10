#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: On success, return pointer to newly allocated concatenated string.
 *         Returns NULL if memory allocation fails.
 */
char *str_concat(char *s1, char *s2)
{
char *concatenated;
unsigned int s1_len, s2_len, i, j;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

s1_len = strlen(s1);
s2_len = strlen(s2);

concatenated = malloc((s1_len + s2_len + 1) * sizeof(char));
if (concatenated == NULL)
return (NULL);

for (i = 0; i < s1_len; i++)
concatenated[i] = s1[i];
for (j = 0; j < s2_len; j++)
concatenated[i++] = s2[j];

concatenated[i] = '\0';

return (concatenated);
}

