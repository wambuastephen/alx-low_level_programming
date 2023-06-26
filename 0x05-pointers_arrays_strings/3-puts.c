#include "main.h"
/**
 * _puts - prints a strin.
 * @str: the string to be printed
 * return: nothing.
 */
void _puts(char *str)
{
for (; *str != '\0'; str++)
{
_putchar(*str);
}
_putchar('\n');
}
