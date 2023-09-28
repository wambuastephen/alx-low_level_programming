#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number whose bit value needs to be extracted.
 * @index: The index of the bit to get, starting from 0.
 *
 * Return: The value of the bit at index index, or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int mask;

if (index >= sizeof(unsigned long int) * 8) /* Ensure index is within bounds */
return (-1);
mask = 1UL << index; /* Create a mask with only the bit at index set to 1 */
if (n & mask) /* Check if the bit at index is 1 */
return (1);
else
return (0);
}
