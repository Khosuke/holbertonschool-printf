#ifndef TEST_MAIN_H
#define TEST_MAIN_H
#include <stdarg.h>
#include <stdlib.h>
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
int _putchar(char c);
int print_char(va_list arg_list);
int print_int(va_list arg_list);
int print_str(va_list arg_list);
int print_percent(va_list arg_list);
int print_unsigned_int(va_list arg_list);
int print_octal(va_list arg_list);
int print_hexa_lower(va_list arg_list);
int print_hexa_upper(va_list arg_list);
int recursion_int(int n);
int recursion_unsigned_int(unsigned int n);
int recursion_octal(unsigned int n);
int recursion_hexa_lower(int n);
int recursion_hexa_upper(int n);

#endif
