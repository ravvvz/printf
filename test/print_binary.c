#include "main.h"

/**
 * print_binary - prints the binary of an int
 * @ap: the variadic argument
 *
 * Return: number of characters printed
 */

int print_binary(va_list ap)
{
	int count = 0, rem = 0, i = 0;
	int num = va_arg(ap, int);
	int array[KILO_BYTE];

	while (num != 0 && i < KILO_BYTE)
	{
		rem = num % 2;
		num = num / 2;
		array[i] = rem;
		i++;
	}

	i--;
	while (i >= 0)
	{
		print_num(array[i], &count);
		i--;
	}
	return (count);
}
