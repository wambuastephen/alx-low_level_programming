#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - selects the correct function to perform the operation.
 * @s: The operator passed as an argument to the program.
 *
 * Return:pointer to function that corresponds to operator given as parameter.
 *If s don't match any of 5 expected operators (+, -, *, /, %), return NULL.
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i = 0;

while (ops[i].op != NULL)
{
if (*(ops[i].op) == *s)
return (ops[i].f);
i++;
}
return (NULL);
}

