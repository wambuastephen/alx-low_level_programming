#include <stdio.h>

/**
 * main - Entry point to print possible combinations of single-digit number
 * Description:prints all possible ascending combinations of single-digits
 * commas separates them,  output is followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
for (n = 48; n < 58; n++)
putchar(n + '0');
if (n != 57)
{
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
