#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times in lowercase.
 * Description: This function prints the lowercase alphabet 10 times using
 *              the _putchar function, with each alphabet sequence followed
 *              by a new line character.
 * Return: 0 success
 */
void print_alphabet_x10(void)
{
int i;
char c;

for (i = 0; i < 10; i++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
