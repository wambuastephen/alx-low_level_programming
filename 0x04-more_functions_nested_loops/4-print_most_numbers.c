#include "main.h"

/**
 * print_most_numbers - prints numbers between 0 and 9 excluding 2 and 4 
 * Return: no return
 */
void print_most_numbers(void)
{
int k;
for (k = 48; k < 58; k++)
{
if (k != 50 && k != 52)
_putchar(k);
}
_putchar('\n');
}
