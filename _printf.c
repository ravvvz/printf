#include "main.h"

/**
 * _printf - print a string
 * @format: a formatted string
 *
 * Return: Number of characters printed
 */

int _printf(const char *format, ...)
{
	char c;
	int i, j, count;
	va_list ap;

	va_start(ap, format);
	i = 0;

	while (format && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					c = va_arg(ap, int);
					count += write(1, &c, 1);
					break;
				case '%':
					c = '%';
					count += write(1, &c, 1);
					break;
				case 's':
					char *str = va_arg(ap, char *);

					for (j = 0; str[j] != '\0'; j++)
						count += write(1, &str[j], 1);
					break;
			}
		}
		else
			count += write(1, &format[i], 1);

		i++;
	}

	write(1, "\n", 2);

	return (count);
}
