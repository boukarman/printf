#include "main.h"

/**
 * _print_reverse - reverse and print the given string
 * @lst: variadic list
 *
 * Return: string length
*/

int _print_reverse(va_list lst)
{
	int length, i;
	char *str = va_arg(lst, char *);

	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	length = _strlen(str);
	for (i = length - 1; i >= 0; i--)
		write(1, &str[i], 1);
	return (length);
}
