#include "main.h"

/**
 * print_hex_custom - prints a value to hex
 * @n: receives an int
 *
 * Return: void
 */

void print_hex_custom(int n)
{
	int hex_d[6] = {10, 11, 12, 13, 14, 15};
	char hex[7] = {'A', 'B', 'C', 'D', 'E', 'F', '\0'};
	int i, j, rem = 0;
	int array[KILO_BYTE];

	i = 0;
	while (n != 0 && i < KILO_BYTE)
	{
		rem = n % 16;
		n = n / 16;
		array[i] = rem;
		i++;
	}

	i--;
	while (i > 0)
	{


		i--;
	}
}
