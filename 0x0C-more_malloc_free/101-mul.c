#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - Checks if a character is a digit
 * @c: The character to check
 *
 * Return: 1 if the character is a digit, 0 otherwise
 */
int _isdigit(char c)
{
return (c >= '0' && c <= '9');
}

/**
 * _strlen - Computes the length of a string
 * @str: The string to compute the length of
 *
 * Return: The length of the string
 */
int _strlen(char *str)
{
int length = 0;
while (str[length] != '\0')
length++;
return (length);
}

/**
 * _multiply - Multiplies two positive numbers represented as strings
 * @num1: The first number
 * @num2: The second number
 *
 * Return: A pointer to a newly allocated string containing the result
 *         NULL if there was an error during multiplication
 */
char *_multiply(char *num1, char *num2)
{
int len1 = _strlen(num1);
int len2 = _strlen(num2);
int len_result = len1 + len2;
int *result;
char *str_result;
int i, j, carry, product;
int start_index;
result = calloc(len_result, sizeof(int));
if (result == NULL)
return (NULL);
str_result = malloc(sizeof(char) * (len_result + 1));
if (str_result == NULL)
{
free(result);
return (NULL);
}
for (i = len1 - 1; i >= 0; i--)
{
carry = 0;
for (j = len2 - 1; j >= 0; j--)
{
product = (num1[i] - '0') * (num2[j] - '0') + carry + result[i + j + 1];
carry = product / 10;
result[i + j + 1] = product % 10;
}
result[i] += carry;
}

start_index = 0;
while (start_index < len_result && result[start_index] == 0)
start_index++;
for (i = 0; i < len_result - start_index; i++)
str_result[i] = result[i + start_index] + '0';
str_result[len_result - start_index] = '\0';

free(result);

return (str_result);
}

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char **argv)
{
char *num1, *num2, *result;
int i;
if (argc != 3)
{
printf("Error\n");
return (98);
}
num1 = argv[1];
num2 = argv[2];
for (i = 0; num1[i] != '\0'; i++)
{
if (!_isdigit(num1[i]))
{
printf("Error\n");
return (98);
}
}
for (i = 0; num2[i] != '\0'; i++)
{
if (!_isdigit(num2[i]))
{
printf("Error\n");
return (98);
}
}
result = _multiply(num1, num2);
if (result == NULL)
{
printf("Error\n");
return (98);
}

printf("%s\n", result);
free(result);

return (0);
}

