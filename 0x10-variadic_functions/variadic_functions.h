#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stddef.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int str_len(const char *str);

void print_char(va_list);
void print_int(va_list);
void print_float(va_list);
void print_str(va_list);
int index_finder(char c, char *str);


/**
 * struct formats - Structure of formats
 * @c: the format given as argument
 * @s: the type corresponding to the format specifier c
 */

typedef struct formats
{
	char c;
	void (*print)(va_list);
}format_t;


#endif /*VARIADIC_FUNCTIONS_H*/
