#include "main.h"

/**
 * print_hex - prints an int to hex
 * @ap: variadic function
 *
 * Return: number of character printed
 */

int print_hex(va_list ap)
{
	int count = 0, i = 0, j = 0, rem = 0;
	int array[KILO_BYTE];
	int num = va_arg(ap, int);
	char hexes[6] = {'a', 'b', 'c', 'd', 'e', 'f'};

	while (num != 0)
	{
		rem = num % 16;
		num = num / 16;
		array[i] = rem;
		i++;
	}
	i--;
	while (i >= 0)
	{
		if (array[i] >= 10 && array[i] <= 15)
		{
			j = array[i] - 10;
			count += _putchar(hexes[j]);
		}
		else
			print_num(array[i], &count);
		i--;
	}

	return (count);
}
