#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * @min: The minimum value
 * @max: The maximum value
 *
 * Return: A pointer to the newly created array
 *         If min > max, or if malloc fails, returns NULL
 *         The array contains all values from min (included) to max (included),
 *         ordered from min to max
 */
int *array_range(int min, int max)
{
int *arr;
int i, size;

if (min > max)
return (NULL);
size = max - min + 1;
arr = malloc(sizeof(int) * size);
if (arr == NULL)
return (NULL);
for (i = 0; i < size; i++)
arr[i] = min++;

return (arr);
}

