#include "main.h"
/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n:A pointer to the number whose bit value needs to be set.
 * @index: The index of the bit to set, starting from 0.
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8) /* Ensure index is within bounds */
return (-1);
*n |= (1UL << index); /* Set the bit at index to 1 using bitwise OR */
return (1);
}
