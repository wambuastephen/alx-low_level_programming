#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98.
 * @n: The starting number.
 *
 * Description: This function prints all natural numbers from n to 98,
 *              separated by a comma and space. The numbers are printed
 *              in ascending order if n is less than 98, and in descending
 *              order if n is greater than 98. The function does not return
 *              any value.
 */

void print_to_98(int n)
{
if (n >= 98)
{
while (n > 98)
printf("%d, ", n--);
printf("%d\n", n);
}
else
{
while (n < 98)
printf("%d, ", n++);
printf("%d\n", n);
}
}
