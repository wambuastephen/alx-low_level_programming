#include <stdio.h>

/**
 * main - entry to print alphabet lower case.
 * return: always (sucess)
 */
int main(void)
{
char lc;
for (lc = 'a'; lc <= 'z'; lc++)
{
putchar(lc);
}
putchar('\n');
return (0);
}
