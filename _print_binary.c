#include "main.h"

/**
 * _print_binary - print binary
 * @a: integer
 *
 * Return: binary number
 */

int _print_binary(unsigned int a)
{
	int i, j, count, tmp;
	char buffer[100];

	i = 0, count = 0;
	do {
		buffer[i++] = a % 2 + '0';
		count++;
		a /= 2;
	} while (a > 0);
	buffer[i] = '\0';
	for (j = 0; j < i / 2; j++)
	{
		tmp = buffer[j];
		buffer[j] = buffer[i - j - 1];
		buffer[i - j - 1] = tmp;
	}
	for (j = 0; buffer[j] != '\0'; j++)
	{
		write(1, &buffer[j], 1);
	}
	return (count);
}
