#include <stdio.h>

/**
 * main - prints the argument count
 * @argc: its the argurment count
 * @argv: its the argument vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
