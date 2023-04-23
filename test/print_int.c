#include "main.h"

void print_num(int value, int *count);
/**
 * print_int - prints an int value
 * @ap: accepts a va_arg
 *
 * Return: int
 */

int print_int(va_list ap)
{
	int count = 0;
	int value = va_arg(ap, int);

	print_num(value, &count);

	return (count);
}

/**
 * print_num - prints the value in string
 * @value: takes in the value
 * @count: character counter
 *
 * Return: void
 */

void print_num(int value, int *count)
{
	if (value < 0)
	{
		value = abs(value);
		count += _putchar('-');
	}

	if (value / 10)
	{
		print_num(value / 10, count);
	}
	*count += _putchar(value % 10 + '0');
}
