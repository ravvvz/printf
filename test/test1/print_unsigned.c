#include "main.h"

/**
 * print_unsigned - prints an int to unsigned
 * @ap: variadic argument
 *
 * Return: number of characters printed
 */

int print_unsigned(va_list ap)
{
	int count = 0;
	unsigned long int num = va_arg(ap, unsigned long int);

	print_num_unsigned_int(num, &count);

	return (count);
}
