#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stdio.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

typedef struct print_type
{
char type;
void (*print)(va_list args);
} print_type_t;

void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS_H */
