#include "main.h"

/**
 * get_function - search the corresponding function
 * @format: character to check
 * Return: the desired function, or NULL
 */

int (*get_function(char format))(va_list)
{
	format_t indicator[] = {
		{"c", print_char},
		{"i", print_int},
		{"d", print_int},
		{"s", print_str},
		{"b", print_binary},
		{"r", print_reverse_str},
		{"R", print_rot13},
		{"%", print_percent},
		{"u", print_unsigned_int},
		{"o", print_octal},
		{"x", print_hexa_lower},
		{"X", print_hexa_upper},
		{"S", print_nonprintchar},
		{NULL, NULL}
	};

	unsigned int j = 0;

	for (j = 0; indicator[j].specifier; j++)
	{
		if (format == *indicator[j].specifier)
		{
			return (indicator[j].function);
		}
	}
	return (NULL);
}
/**
 * _printf - print arguments passed to the function
 * @format: string passed to the function
 * Return: lenght of the format and its arguments
 */
int _printf(const char *format, ...)
{

	unsigned int i = 0, len = 0;
	int (*f)(va_list);
	va_list arg_list;

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);
	/* loop on each caracter of the string format */
	for (i = 0; format != NULL && format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			f = get_function(format[i + 1]);
			if (f != NULL)
			{
				len += f(arg_list);
			}
			else if (format[i + 1] == '\0')
			{
				return (-1);
			}
			else
			{
				_putchar('%');
				_putchar(format[i + 1]);
				len += 2;
			}
			i++;
		}
		else
		{
			len++;
			_putchar(format[i]);
		}
	}
	va_end(arg_list);
	return (len);
}
