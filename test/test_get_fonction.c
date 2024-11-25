#include "test_main.h"

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
		{NULL, NULL}
	};
	unsigned int i = 0, j = 0, len = 0;
	va_list arg_list;

	va_start(arg_list, format);
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == "%")
		{
			j = 0;
			while (indicator[j].specifier != NULL)
			{
				if (format[i + 1] == *indicator[j].specifier)
				{
					(indicator[j].function)(arg_list);
					len += indicator[j].function(arg_list);
					i++;
					break;
				}
				j++;
			}
		}
		else
		{
			len += 1;
			_putchar(format[i]);
		}
	}
		i++;
	va_end(arg_list);
	return (len);
}
