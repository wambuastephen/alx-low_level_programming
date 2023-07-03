#include "main.h"
#include <stdio.h>

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Pointer to the pointer to char.
 * @to: Pointer to char to set.
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
    *s = to;
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
char *s0 = "Bob Dylan";
char *s1 = "Robert Allen";

printf("%s, %s\n", s0, s1);
set_string(&s1, s0);
printf("%s, %s\n", s0, s1);
return (0);
}

