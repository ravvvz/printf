#include "main.h"

/**
 * print_binary - prints the binary of an int
 * @ap: the variadic argument
 *
 * Return: number of characters printed
 */

int print_binary(va_list ap)
{
	unsigned int num;
	char binary[32];
	int i = 0, j;
	int count = 0;

	num = va_arg(ap, unsigned int);

	if (num == 0)
	{
		count += _putchar('0');
	}
	while (num > 0)
	{
		binary[i] = num % 2 + '0';
		num /= 2;
	}
	for (j = i - 1; j >= 0; --j)
	{
		count += _putchar(binary[j]);
	}

	return (count);
}
