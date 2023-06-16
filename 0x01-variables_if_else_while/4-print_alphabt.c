#include <stdio.h>

/**
 * main - Entry point to print the lowercase alphabet except for 'e' and 'q'.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ba;

for (ba = 'a'; ba <= 'z'; ba++)
{
if (ba != 'e' && ba != 'q')
putchar(ba);
}

putchar('\n');

return (0);
}

