#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0
 */

int main(void)
{
	int v = -12, i = 20, b = 98;
	char *str = "If I was a girl, I'd be so fine";
	char c = 'E';

	printf("Our Printf: \n");

	_printf("%s \n%c \nv: %d\n i: %d\n", str, c, v, i);
	_printf("%b\n", 98);

	_printf("decimal: %d \noctal: %o \nhex: %x \nHEX: %X\n", b, b, b, b);

	_printf("Unsigned: %u\n", -12);
	return (0);
}
