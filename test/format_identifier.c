#include "main.h"

/**
 * format_identifier - identifies a format
 * @c: accepts a char
 * @ap: accepts a variadic function
 *
 * Return: number of characters printed
 */

int format_identifier(const char *c, va_list ap, int i)
{
	int count = 0;
	int (*func_ptr)(va_list);
	va_list copy;

	switch(c[i])
	{
		case '\0':
			return (-1);
			break;
		case '%':
			count += _putchar('%');
			break;
		case '+':
			va_copy(copy, ap);
			count += check_plus(ap, c, &i);
			printf("%d\n", i);
			goto init_func;
			break;
		case '#':
			i++;
			if (c[i] == 32)
				i++;
			if (c[i] == 'x' || c[i] == 'X')
			{
				if (c[i - 1] == 32)
				{
					count += _putchar(' ');
					count += _putchar('0');
				}
				else
					count += _putchar('0');
				i++;
			}
			else
				return (-1);
			goto init_func;
			break;
		case ' ':
			count += _putchar(' ');
			i++;
			goto init_func;
			break;
		default:
			goto init_func;
	}
	
	init_func:
	{
		func_ptr = check_function(c[i]);
		if (func_ptr == NULL)
			count += _putchar('%') + _putchar(c[i]);
		else
			count += func_ptr(ap);
	}
	va_end(copy);


	return (count);
}
