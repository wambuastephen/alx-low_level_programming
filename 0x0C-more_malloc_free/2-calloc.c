#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array using malloc
 * @nmemb: The number of elements in the array
 * @size: The size of each element
 *
 * Return: A pointer to the allocated memory
 *         If nmemb or size is 0, or if malloc fails, returns NULL
 *         The allocated memory is initialized to zero
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *ptr;

if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(nmemb * size);
if (ptr == NULL)
return (NULL);
for (i = 0; i < (nmemb * size); i++)
ptr[i] = 0;
return (ptr);
}

