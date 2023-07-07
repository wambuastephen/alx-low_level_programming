#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - prints the product of two args numbers
 * @argc: its the argument count
 * @argv: its the argument vector
 * Return: 0 0n successs and error followed by newline
 */
int main(int argc, char *argv[])
{
int k1 = 0, k2 = 0;
if (argc == 3)
{
k1 = atoi(argv[1]);
k2 = atoi(argv[2]);
printf("%d\n", k1 *k2);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
