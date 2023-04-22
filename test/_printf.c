#include "main.h"

/**
 * _printf - print a string
 * @format: a formatted string
 *
 * Return: Number of characters printed
 */

int _printf(const char *format, ...)
{
	char *str;
	int i, count = 0;
	va_list ap;

	va_start(ap, format);
	i = 0;
	if (format == NULL)
		return (-1);

	while (format && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					count += print_char(va_arg(ap, int));
					break;
				case '%':
					count += _putchar('%');
					break;
				case 's':
					str = va_arg(ap, char *);
					if (str == NULL)
						return (-1);
					count += print_string(str);
					break;
				default:
					count += _putchar(format[i]);
					break;
			}
		}
		else
			count += _putchar(format[i]);
		i++;
	}
	_putchar('\n');
	va_end(ap);

	return (count);
}
