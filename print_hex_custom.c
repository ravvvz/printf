#include "main.h"

/**
 * print_hex_custom - prints a value to hex
 * @n: receives an int
 * @count: number of characters printed
 *
 * Return: void
 */

void print_hex_custom(int *n, int *count)
{
	char hex[6] = {'A', 'B', 'C', 'D', 'E', 'F'};
	int i, j, rem = 0;
	int array[KILO_BYTE];

	i = 0;
	array[1] = -1;
	while (*n != 0 && i < KILO_BYTE)
	{
		rem = *n % 16;
		*n = *n / 16;
		array[i] = rem;
		i++;
	}

	if (array[i] == -1)
		array[i] = 0;

	while (i >= 0)
	{
		if (array[i] >= 10 && array[i] <= 15)
		{
			j = array[i] - 10;
			count += _putchar(hex[j]);
		}
		else
			print_num(array[i], count);

		i--;
	}
}
