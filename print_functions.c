#include "main.h"
#include <stddef.h>
#include <unistd.h>

/**
 * print_char - print a char
 * @arg_list: arguments list
 * Return: len of the char
 */

int print_char(va_list arg_list)
{
	_putchar(va_arg(arg_list, int));
	return (1);
}

/**
 * print_str - print a string
 * @arg_list: arguments list
 * Return: len of the string
 */

int print_str(va_list arg_list)
{
	int i = 0;
	int len = 0;
	char *str = va_arg(arg_list, char *);

	if (str == NULL)
	{
		str = "(null)";
	}

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		len++;
		i++;
	}

	return (len);
}

/**
 * print_reverse_str - print a string in reverse
 * @arg_list: arguments list
 * Return: len of the string
 */

int print_reverse_str(va_list arg_list)
{
	int i = 0;
	int len = 0;
	char *str = va_arg(arg_list, char *);
	if (str == NULL)
	{
		str = "(null)";
	}
	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	while (i >= 0)
	{
		_putchar(str[i]);
		i--;
	}
	return (len);
}

/**
 * print_percent - print percent
 * @arg_list: arguments list (unused)
 * Return: len of percent
 */

int print_percent(va_list arg_list)
{
	(void)arg_list;
	_putchar(37);
	return (1);
}

/**
 * print_rot13 - convert a string into rot13 language
 * @arg_list: arguments list
 * Return: len of the string
 */

int print_rot13(va_list arg_list)
{
	int i = 0;
	int len = 0;
	char *str = va_arg(arg_list, char *);
	char c;


	if (str == NULL)
	{
		str = "(null)";
	}

	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			c = ((str[i] - 65 + 13) % 26) + 65;
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			c = ((str[i] - 97 + 13) % 26) + 97;
		}
		else
		{
			c = str[i];
		}
		_putchar(c);
		len++;
		i++;
	}

	return (len);
}
