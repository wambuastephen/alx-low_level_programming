#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_char - Prints a char.
 * @args: The argument list.
 */
void print_char(va_list args)
{
printf("%c", va_arg(args, int));
}

/**
 * print_integer - Prints an integer.
 * @args: The argument list.
 */
void print_integer(va_list args)
{
printf("%d", va_arg(args, int));
}

/**
 * print_float - Prints a float.
 * @args: The argument list.
 */
void print_float(va_list args)
{
printf("%f", va_arg(args, double));
}

/**
 * print_string - Prints a string (or (nil) if NULL).
 * @args: The argument list.
 */
void print_string(va_list args)
{
char *str = va_arg(args, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
}

/**
 * print_all - Prints anything depending on the format.
 * @format: A list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0, j = 0;
char *sep = "";
print_type_t print_types[] = {
{'c', print_char},
{'i', print_integer},
{'f', print_float},
{'s', print_string},
{'\0', NULL}
};
va_start(args, format);
while (format && format[i])
{
j = 0;
while (print_types[j].type != '\0')
{
if (format[i] == print_types[j].type)
{
printf("%s", sep);
print_types[j].print(args);
sep = ", ";
}
j++;
}
i++;
}
va_end(args);
printf("\n");
}

