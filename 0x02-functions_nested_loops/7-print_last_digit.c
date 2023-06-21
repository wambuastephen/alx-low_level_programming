#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @b: The number to extract the last digit from.
 *
 * Return: Always 0.
 */


int print_last_digit(int b)
{

int c;
int c = b % 10;

if (c < 0)
{
_putchar(-c + 48);
return (-c);
}
else
}
_putchar(c + 48);
return (c);
}
