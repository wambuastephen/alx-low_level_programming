#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int k;
int m;

for (k = 0; k <= 8; k++)
{
for (m = k + 1; m <= 9; m++)
{
putchar(k + '0');
putchar(m + '0');
if (k != 8 || m != 9)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}

