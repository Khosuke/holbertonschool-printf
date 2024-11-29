#include "main.h"

/**
 * print_nonprintchar - print a string
 * but print the hexadecimal value of a nonprintable character
 * @arg_list: the argument list
 * Return: The length of the string
 */
int print_nonprintchar(va_list arg_list)
{
	unsigned char *str;
	int i = 0, len = 0;
	str = va_arg(arg_list, unsigned char*);

	while (str[i] != '\0')
	{
		if ((str[i] < 32 || str[i] >= 127) && str[i])
		{
			_putchar('\\');
			_putchar('x');
			len += 2;
			if (str[i] < 15)
			{
				_putchar('0');
			}
			recursion_hexa_upper(str[i]);
		}
		else
		{
			_putchar(str[i]);
		}
		i++;
	}
	return (i + len);
}

