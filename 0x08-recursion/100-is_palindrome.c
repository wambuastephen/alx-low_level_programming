#include "main.h"
#include <stdio.h>

/**
 * is_palindrome - Check if a string is a palindrome
 * @s: The string to be checked
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
int len = 0;
int i;

/* Calculate the length of the string */
while (s[len] != '\0')
len++;

/* Compare characters from both ends */
for (i = 0; i < len / 2; i++)
{
if (s[i] != s[len - i - 1])
return (0); /* Not a palindrome */
}

return (1); /* Palindrome */
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int r;

r = is_palindrome("level");
printf("%d\n", r);
r = is_palindrome("redder");
printf("%d\n", r);
r = is_palindrome("test");
printf("%d\n", r);
r = is_palindrome("step on no pets");
printf("%d\n", r);

return (0);
}

