#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: The pointer to the memory block to reallocate
 * @old_size: The size of the currently allocated memory block, in bytes
 * @new_size: The size of the new memory block, in bytes
 *
 * Return: A pointer to the reallocated memory block
 *If new_size is equal to zero, and ptr is not NULL, returns NULL
 *If malloc fails, returns NULL
 *If new_size is equal to old_size, returns ptr
 *If ptr is NULL, the call is equivalent to malloc(new_size)
 *Frees the memory block pointed by ptr when it makes sense
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;
if (new_size == old_size)
return (ptr);
if (ptr == NULL)
{
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);
return (new_ptr);
}
if (new_size == 0)
{
free(ptr);
return (NULL);
}
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);
if (new_size < old_size)
old_size = new_size;
memcpy(new_ptr, ptr, old_size);
free(ptr);
return (new_ptr);
}

