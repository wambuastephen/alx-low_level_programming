#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @b: The number to extract the last digit from.
 *
 * Return: Always 0.
 */

int print_last_digit(int b)
{

int bs = b % 10;

if (bs < 0)
bs *= -1;

_putchar(bs + '0');
return (0);
}
