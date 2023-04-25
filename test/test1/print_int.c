#include "main.h"

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
