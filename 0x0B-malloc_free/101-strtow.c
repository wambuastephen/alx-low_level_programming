#include <stdlib.h>

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
if (str[i] != ' ')
{
count++;
while (str[i] != ' ' && str[i] != '\0')
i++;
}
else
{
while (str[i] == ' ')
i++;
}
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
while (str[i] != '\0' && count > 0)
{
while (str[i] == ' ')
i++;
len = 0;
while (str[i + len] != ' ' && str[i + len] != '\0')
len++;
words[count - 1] = malloc((len + 1) * sizeof(char));
if (words[count - 1] == NULL)
{
while (count <= count_words(str))
free(words[count++]);
free(words);
return (NULL);
}
for (j = 0, k = i; j < len; j++, k++)
words[count - 1][j] = str[k];
words[count - 1][j] = '\0';
count--;
i += len;
}
words[count] = NULL;
return (words);
}

