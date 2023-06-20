#include "main.h"

/**
 * times_table - Prints the multiplication table from 0 to 9.
 *
 * Description: This function prints the multiplication table from 0 to 9
 *              in the following format:
 *              0, 0, 0, 0, 0, 0, 0, 0, 0, 0
 *              0, 1, 2, 3, 4, 5, 6, 7, 8, 9
 *              0, 9, 18, 27, 36, 45, 54, 63, 72, 81
 */

void times_table(void)
{
int num, mult, prod;

for (num = 0; num <= 9; num++)
{
_putchar('0');
for (mult = 1; mult <= 9; mult++)
{
_putchar(',');
_putchar(' ');

prod = num * mult;

if (prod <= 9)
_putchar(' ');

else

_putchar((prod / 10) + '0');
_putchar((prod % 10) + '0');
}
_putchar('\n');
}
}
