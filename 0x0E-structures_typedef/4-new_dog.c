#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog structure
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the newly created dog structure
 *         NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
char *name_copy;
char *owner_copy;
int name_len, owner_len;
/* Check if name or owner is NULL */
if (name == NULL || owner == NULL)
return (NULL);
/* Get the lengths of name and owner strings */
name_len = strlen(name);
owner_len = strlen(owner);
/* Allocate memory for the new dog structure */
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
{
return (NULL); /* Return NULL if memory allocation fails */
}
/* Allocate memory for name and owner copies */
name_copy = malloc((name_len + 1) * sizeof(char));
owner_copy = malloc((owner_len + 1) * sizeof(char));
/* Check if memory allocation for name_copy or owner_copy fails */
if (name_copy == NULL || owner_copy == NULL)
{
free(new_dog);
free(name_copy);
free(owner_copy);
return (NULL); /* Return NULL if memory allocation fails */
}
/* Copy the name and owner strings */
strcpy(name_copy, name);
strcpy(owner_copy, owner);
/* Assign values to the new dog structure */
new_dog->name = name_copy;
new_dog->age = age;
new_dog->owner = owner_copy;
return (new_dog);
}

