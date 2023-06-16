#include <stdio.h>

/**
 * main - Entry point to print all single digit numbers of base 10
 * return: 0 (success)
 */

int main(void)
{
int num;

for (num = 0; num < 10; num++)
putchar(num % 10) + '0");

putchar('\n');

return (0);
