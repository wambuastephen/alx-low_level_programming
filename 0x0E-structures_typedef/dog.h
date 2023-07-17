#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure representing a dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */
struct dog
{
char *name;
float age;
char *owner;
};
/* Function prototype for print_dog */
void print_dog(struct dog *d);

#endif /* DOG_H */

