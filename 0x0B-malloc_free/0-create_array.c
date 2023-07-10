#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates array of chars, initializes it with specific char.
 * @size: The size of the array.
 * @c: The char to initialize the array with.
 *
 * Return: On success, returns a pointer to the created array.
 *         If @size is 0 or if memory allocation fails, returns NULL.
 */
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;

if (size == 0)
return (NULL);

array = malloc(size * sizeof(char));
if (array == NULL)
return (NULL);

for (i = 0; i < size; i++)
array[i] = c;

return (array);
}

