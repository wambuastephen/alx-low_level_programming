 #include "main.h"

/**
 * print_sign - Prints the sign of a number.
 * @n: The number to check.
 *
 * Return: 1 if positive, 0 if zero, -1 if negative.
 */


int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n == 0)
{
_putchar(45);
return (0);
}
else
{
_putchar(48);
return (-1);
}
_putchar('\n');
}
