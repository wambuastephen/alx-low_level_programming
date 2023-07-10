#include <stdlib.h>
#include <string.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words.
 */
int count_words(char *str)
{
int count = 0, i = 0;
while (str[i] != '\0')
{
if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
count++;
i++;
}
return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words), or NULL if it fails.
 */
char **strtow(char *str)
{
char **words;
int i, j, k, len, count = 0;
if (str == NULL || str[0] == '\0')
return (NULL);
count = count_words(str);
if (count == 0)
return (NULL);
words = malloc((count + 1) * sizeof(char *));
if (words == NULL)
return (NULL);
i = 0;
count = 0;
while (str[i] != '\0')
{
while (str[i] == ' ')
i++;
len = 0;
while (str[i + len] != ' ' && str[i + len] != '\0')
len++;
words[count] = malloc((len + 1) * sizeof(char));
if (words[count] == NULL)
{
for (j = 0; j < count; j++)
free(words[j]);
free(words);
return (NULL);
}
for (k = 0; k < len; k++)
words[count][k] = str[i++];
words[count][k] = '\0';
count++;
}
words[count] = NULL;
return (words);
}

