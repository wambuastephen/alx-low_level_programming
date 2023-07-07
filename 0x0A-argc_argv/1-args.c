#include <stdio.h>
/**
 * main - prints number of arguments
 * @argc: its the argument count
 * @argv: its the argument vectot count
 * Return: always 0
 */
int main(int argc, char *argv[])
{
(void) argv;
printf("%d\n", argc - 1);
return (0);
}
