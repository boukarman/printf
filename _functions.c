#include "main.h"

/**
 * _strlen - count the length of a string
 * @s: string
 *
 * Return: length of a string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
/**
 * print_str - print string
 * @str: string to print
 *
 * Return: length of string
 */
int print_str(char *str)
{
	int len;

	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	len = _strlen(str);
	for (; *str != '\0'; str++)
		write(1, str, 1);
	return (len);
}

/**
 * print_percent_sign - print percent character
 * @x: number
 * Return: x
 */
int print_percent_sign(int x)
{
	char ch = '%';

	write(1, &ch, x);
	return (x);
}

/**
 * print_char - print character
 * @lst: variable list
 *
 * Return: 1
 */
int print_char(va_list lst)
{
	char character = va_arg(lst, int);

	write(1, &character, 1);
	return (1);
}

/**
 * print_unknown - print unknown specifiers
 * @ch: character
 *
 * Return: -1 if error, or 2
 */
int print_unknown(char ch)
{
	char character = '%';

	if (ch == '\0')
		return (-1);
	write(1, &character, 1);
	write(1, &ch, 1);
	return (2);
}
