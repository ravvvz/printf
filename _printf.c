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

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					c = va_arg(ap, int);
					count += _putchar(c);
					break;
				case '%':
					c = '%';
					count += _putchar(c);
					break;
				case 's':
					char *str = va_arg(ap, char *);

					for (j = 0; str[j] != '\0'; j++)
						count += _putchar(str[j]);
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
