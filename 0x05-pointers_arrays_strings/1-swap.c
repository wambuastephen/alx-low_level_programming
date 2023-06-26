#include <stdio.h>
/**
 * swap_int - swaps the values of two integers.
 * Description:swap_int - is a function that swaps the values of two integers.
 * @a: the first integer.
 * @b: the second integer.
 * Return: nothing.
 */
void swap_int(int *a, int *b)
/* the function that swaps the values of two integers a and b. */
{
int temp = *a;
*a = *b;
*b = temp;
}
