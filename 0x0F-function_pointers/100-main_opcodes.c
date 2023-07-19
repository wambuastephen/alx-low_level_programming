#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point.
 * @argc: The number of command line arguments.
 * @argv: An array containing the command line arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int i, num_bytes;
if (argc != 2)
{
printf("Error\n");
return (1);
}
num_bytes = atoi(argv[1]);
if (num_bytes < 0)
{
printf("Error\n");
return (2);
}
unsigned char *ptr = (unsigned char *)main;
for (i = 0; i < num_bytes; i++)
{
printf("%02x", ptr[i]);
if (i < num_bytes - 1)
printf(" ");
}
printf("\n");
return (0);
}
