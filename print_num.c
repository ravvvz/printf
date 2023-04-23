#include "main.h"

/**
 * print_num - prints an integer to char
 * @value: the number
 * @count: counter of characters printed
 *
 * Return: Nothing.
 */

void print_num(int value, int *count)
{
	if (value < 0)
	{
		*count += _putchar('-');
		value = abs(value);
	}

	if (value / 10)
	{
		print_num(value / 10, count);
	}

	*count += _putchar(value % 10 + '0');
}
