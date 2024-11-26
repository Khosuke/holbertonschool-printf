#include "main.h"

/**
 * _printf - print arguments passed to the function
 * @format: string passed to the function
 * Return: lenght of the format and its arguments
 */

int _printf(const char *format, ...)
{
	format_t indicator[] = {
		{"c", print_char},
		{"i", print_int},
		{"d", print_int},
		{"s", print_str},
		{"%", print_percent},
		{NULL, NULL}
	};
	unsigned int i = 0, j = 0, len = 0;
	va_list arg_list;

	va_start(arg_list, format);
	/* loop on each caracter of the string format */
	for (i = 0; format != NULL && format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			/* loop on each specifier of our structure */
			for (j = 0; indicator[j].specifier != NULL; j++)
			{
				if (format[i + 1] == *indicator[j].specifier)
				{
					len += (indicator[j].function)(arg_list);
					i++;
					break;
				}
			}
		}
		else
		{
			len += 1;
			_putchar(format[i]);
		}
	}
	va_end(arg_list);
	return (len);
}
