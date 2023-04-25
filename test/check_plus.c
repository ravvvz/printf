#include "main.h"

/**
 * check_plus - checks for the plus flag
 * @ap: takes a variadic function
 * @count: takes the number of character printed
 *
 * Return: int
 */

int check_plus(va_list ap, const char *c, int *i)
{
	int count = 0;
	va_list copy;

	printf("%d\n", *i);
	(*i)++;
	printf("%d\n", *i);
	va_copy(copy, ap);
	if (va_arg(copy, int) >= 0)
		count += _putchar('+');
	if (c[*i] == 32)
	{
		count += _putchar(' ');
		i++;
	}

	return (count);
}
