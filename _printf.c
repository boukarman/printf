#include "main.h"

/**
 * conv_spec - to choose the conversion specifier
 * @ch: specifier
 * @lst: list of arguments
 *
 * Return: number of printed characters
 */
int conv_spec(char ch, va_list lst)
{
	int print = 0;
	int a;

	if (ch == '%')
		print = print_percent_sign(1);
	else if (ch == 'c')
		print = print_char(lst);
	else if (ch == 's')
		print = print_str(va_arg(lst, char *));
	else if (ch == 'd' || ch == 'i')
	{
		a = va_arg(lst, int);
		print = print_d(a);
	}
	else
		print = print_unknown(ch);
	return (print);
}

/**
 * _printf - printf function
 * @format: format string
 *
 * Return: number of printed characters
 */
int _printf(const char *format, ...)
{
	va_list lst;
	int print = 0;
	int length;

	va_start(lst, format);
	if (format == NULL || *format == '\0')
		return (-1);
	for (; *format; format++)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			print++;
		}
		else
		{
			format++;
			length = 0;
			length = conv_spec(*format, lst);
			if (length < 0)
				return (-1);
			print += length;
		}
	}
	va_end(lst);
	return (print);
}

