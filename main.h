#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stddef.h>
/**
 * struct format_type - Structure of format specifier
 * @specifier: the data type specifier
 * @function: pointer to function of the corresponding print data type
 * Description: used to print an argument
 * with it's correct type specified
 */
typedef struct format_type
{
	char *specifier;
	int (*function)(va_list);
} format_t;
int _printf(const char *format, ...);
int print_char(va_list arg_list);
int print_int(va_list arg_list);
int recursion_int(int n);
int print_str(va_list arg_list);
int print_percent(va_list arg_list);
int _putchar(char c);

#endif
