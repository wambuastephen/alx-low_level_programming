#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase, followed by a new line.
 *
 * Description: This function prints the lowercase alphabet using _putchar,
 *              followed by a new line character.
 */
void print_alphabet(void)
{
char bc;
for (bc = 'a'; bc <= 'z'; bc++)
{
_putchar(bc);
}
_putchar('\n');
return (0);
}
