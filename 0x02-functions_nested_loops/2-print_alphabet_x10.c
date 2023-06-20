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
int ten;
char bs;
for (ten = 0; ten <= 9; ten++)
{
for (bs = 'a'; bs <= 'z'; bs++)
_putchar(bs);
putchar('\n');
}
}
