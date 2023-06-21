#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase, followed by a new line.
 * Description: This function prints the lowercase alphabet using _putchar,
 *             followed by a new line character.
 */

void print_alphabet(void)
{
int k;

for (k = 97; k <= 122; k++)
_putchar(k);

_putchar("\n");
}
