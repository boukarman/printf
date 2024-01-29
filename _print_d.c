#include "main.h"
/**
 * _print_d - print a decimal number
 * @a: number
 *
 * Return: number length
 */
int print_d(int a)
{
	int i, j, count, tmp, isNegative;
	char buffer[32];

	i = 0, isNegative = 0, count = 0;
	if (a == INT_MIN)
	{
		write(1, "-2147483648", _strlen("-2147483648"));
		return (_strlen("-2147483648"));
	}
	if (a < 0)
	{
		a = -a;
		isNegative = 1;
	}
	do {
		buffer[i++] = a % 10 + '0';
		count++;
		a /= 10;
	} while (a > 0);
	if (isNegative)
	{
		buffer[i++] = '-';
		count++;
	}
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
