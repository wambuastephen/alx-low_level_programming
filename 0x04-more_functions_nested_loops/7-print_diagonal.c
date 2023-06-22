#include "main.h"

/**
 * print_diagonal - prints diagonal line n times.
 * @m: times diagonal line is printed.
 * Return: no return.
 */
void print_diagonal(int m)
{
int i, j;

for (i = 0; i < m; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar(92);
if (i < (m - 1))
_putchar('\n');
}
_putchar('\n');
}

