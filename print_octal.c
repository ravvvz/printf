#include "main.h"

/**
 * print_octal - prints a value in octal
 * @ap: variadic argument
 *
 * Return: number of arg printed
 */

int print_octal(va_list ap)
{
	int rem = 0, count = 0, i = 0;
	int array[KILO_BYTE];
	int num = va_arg(ap, int);

	while (num != 0 && i < KILO_BYTE)
	{
		rem = num % 8;
		num = num / 8;
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
