#include "main.h"

/**
 * _printf - print a string
 * @format: a formatted string
 *
 * Return: Number of characters printed
 */

int _printf(const char *format, ...)
{
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
			count += format_identifier(format, ap, i);
			if (count == -1)
				return (-1);
		}
		else
			count += _putchar(format[i]);
		i++;
	}
	va_end(ap);

	return (count);
}

