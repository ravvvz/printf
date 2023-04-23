#include "main.h"

/**
 * print_hex_cap - prints an int to hex
 * @ap: variadic function
 *
 * Return: number of character printed
 */

int print_hex_cap(va_list ap)
{
	int count = 0, i = 0, j = 0, rem = 0;
	int array[KILO_BYTE];
	int num = va_arg(ap, int);
	char hexes[7] = {'A', 'B', 'C', 'D', 'E', 'F', '\0'};
	int hexes_d[6] = {10, 11, 12, 13, 14, 15};

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
		j = 0;
		if (array[i] >= 10 && array[i] <= 15)
			while (hexes_d[j])
			{
				if (hexes_d[j] == array[i])
				{
					count += _putchar(hexes[j]);
					break;
				}
				j++;
			}
		print_num(array[i], &count);
		i--;
	}

	return (count);
}
