#include "main.h"

/**
 * address_print - prints the memory address of a pointer
 * @ap: the variadic argument
 *
 * Return: number of character printed
 */

int address_print(va_list ap)
{
	int count = 0, digits, i;
	char hex[16] = "0123456789abcdef";
	void *p = va_arg(ap, void *);
	uintptr_t addr = (uintptr_t)p;

	count += _putchar('0');
	count += _putchar('x');
	digits = sizeof(uintptr_t) * 2;

	while (digits > 0)
	{
		i = addr % 16;
		count += _putchar(hex[i]);
		addr /= 16;
		digits--;
	}
	return (count);
}
