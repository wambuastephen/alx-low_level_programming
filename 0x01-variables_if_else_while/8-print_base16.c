#include <stdio.h>

/**
 * main - Entry point to print numbers of base 16 in lowercase
 * Description: This program prints numbers of base 16 (0-9, a-f) in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num;
char by;

for (num = 0; num < 10; num++)
putchar((num % 10) + '0');

for (by = 'a'; by <= 'f'; by++)
putchar(by);

putchar('\n');

return (0);
}
