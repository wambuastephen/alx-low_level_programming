#include "main.h"
#include <stdio.h>

/**
 * main - entry prints multiplication table from 0 to 9
 * times_table_ is the Print of the multiplication table from 0 to 9.
 *
 * Description: This function prints the multiplication table from 0 to 9
 *              in the following format:
 *              0, 0, 0, 0, 0, 0, 0, 0, 0, 0
 *              0, 1, 2, 3, 4, 5, 6, 7, 8, 9
 *              0, 9, 18, 27, 36, 45, 54, 63, 72, 81
 * Return: always 0 success
 */
void times_table(void)
{
int x, y, u, d, z;
for (x = 0; x <= 9; x++)
{
for (y = 0; y <= 9; y++)
{
z = x * y;
if (z > 9)
{
u = z % 10;
d = (z - u) / 10;
_putchar(44);
_putchar(32);
_putchar(d + '0');
_putchar(u + '0');
}
else
{
if (y != 0)
{
_putchar(44);
_putchar(32);
_putchar(32);
}
_putchar(z + '0');
}
}
_putchar('\n');
}
}
