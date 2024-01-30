#include "main.h"

/**
 * print_R - print rot13
 * @lst: variadic list
 *
 * Return: number of character
*/

int print_rot(va_list lst)
{
	int i; 
	int length = 0;
	char rot;
	char *str = va_arg(lst, char *);

	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
		{
			rot = str[i] + 13;
			write(1, &rot, 1);
			length++;
		}
		else if (str[i] >= 'n' && str[i] <= 'z')
		{
			rot = str[i] - 13;
			write(1, &rot, 1);
			length++;
		}
		else if (str[i] >= 'N' && str[i] <= 'Z')
		{
			rot = str[i] - 13;
			write(1, &rot, 1);
			length++;
		}
		else
		{
			write(1, &str[i], 1);
			length++;
		}
	}
	return (length);
}
