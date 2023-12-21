#include "operations.h"

/**
 * add - Function that adds two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Result of the addition
 */
int add(int a, int b)
{
return (a + b);
}

/**
 * sub - Function that subtracts two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Result of the subtraction
 */
int sub(int a, int b)
{
return (a - b);
}

/**
 * mul - Function that multiplies two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Result of the multiplication
 */
int mul(int a, int b)
{
return (a * b);
}

/**
 * div - Function that divides two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Result of the division
 */
int div(int a, int b)
{
if (b == 0)
{
/* Handle division by zero */
return (0);
}
else
{
return (a / b);
}
}

/**
 * mod - Function that calculates the modulo of two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Result of the modulo operation
 */
int mod(int a, int b)
{
if (b == 0)
{
/* Handle modulo by zero */
return (0);
}
else
{
return (a % b);
}
}

