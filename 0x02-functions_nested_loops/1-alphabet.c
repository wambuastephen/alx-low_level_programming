#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase, followed by a new line.
 * Description: This function prints the lowercase alphabet using _putchar,
 *             followed by a new line character.
 */

void print_alphabet(void)
{
char bb;

for (bb = 'a'; bb <= 'z'; bb++)
_putchar(bb);

_putchar("\n");
}
