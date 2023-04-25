#include "main.h"

/**
 * print_int - prints an int value
 * @ap: accepts a va_arg
 *
 * Return: int
 */

int print_int(va_list ap)
{
	unsigned int absolute, aux, countnum, number;
	int n;

	n = va_arg(ap, int);
	number = 0;

	if (n < 0)
	{
		absolute = (n * -1);
		number += _putchar('-');
	}
	else
	{
		absolute = n;
	}
	aux = absolute;
	countnum = 1;
	while (aux > 9)
	{
		aux = aux / 10;
		countnum *= 10;
	}
	while (countnum >= 1)
	{
		number += _putchar(((absolute / countnum) % 10) + '0');
		countnum /= 10;
	}

	return (number);
}
