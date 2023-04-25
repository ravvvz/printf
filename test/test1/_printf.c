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
	int (*func_ptr)(va_list);

	va_start(ap, format);
	i = 0;
	if (format == NULL)
		return (-1);
	while (format && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			switch(format[i])
			{
				case '\0':
					return (-1);
					break;
				case '%':
					count += _putchar('%');
					break;
				default:
					func_ptr = check_function(format[i]);
					if (func_ptr == NULL)
						count += _putchar('%') + _putchar(format[i]);
					else
						count += func_ptr(ap);
			}
		}
		else
			count += _putchar(format[i]);
		i++;
	}
	va_end(ap);

	return (count);
}

