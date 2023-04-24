#include "main.h"

/**
 * custom_convert - prints a string
 * @ap: variadic argument
 *
 * Return: number of character printed
 */

int custom_convert(va_list ap)
{
	int i, count;
	char *str = va_arg(ap, char *);

	if (str == NULL)
		str = "(null)";

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > 0 && str[i] < 32)  || str[i] >= 127)
		{
			count += _putchar('\\');
			count += _putchar('x');
			print_hex_custom(str[i], &count);
		}
		else
		{
			count += _putchar(str[i]);
		}
		i++;
	}

	return (count);
}
