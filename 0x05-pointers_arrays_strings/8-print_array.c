#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements oa an array of integers
 * @a: Array of integers
 * @n: Number of elements of array to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
int j;
for (j = 0; j < n; j++)
{
printf("%d", a[j]);
if (j != (n - 1))
{
printf(", ");
}
}
printf("\n");
}
