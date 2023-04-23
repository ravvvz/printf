#include "main.h"

unsigned long int _abs(unsigned long int n);
/**
 * print_num_unsigned_int - prints an integer to char
 * @value: the number
 * @count: counter of characters printed
 *
 * Return: Nothing.
 */

void print_num_unsigned_int(unsigned long int value, int *count)
{
	unsigned long int v = 0;

	if (value < v)
	{
		*count += _putchar('-');
		value = _abs(value);
	}

	if (value / 10)
	{
		print_num(value / 10, count);
	}

	*count += _putchar(value % 10 + '0');
}

/**
 * _abs - converts an inter to absolute
 * @n: the integer
 *
 * Return: the itnt
 */

unsigned long int _abs(unsigned long int n)
{
	unsigned long int v = -1;

	return (v * (n));
}
