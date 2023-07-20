#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

typedef struct print_type
{
    char type;
    void (*print)(va_list args);
} print_type_t;

void print_all(const char * const format, ...);
#endif /*MAIN_H*/
