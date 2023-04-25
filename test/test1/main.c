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
	char *p = &c;

	printf("Our Printf: \n");

	_printf("%s \n%c \nv: %d\n i: %d\n", str, c, v, i);
	_printf("%b\n", 98);

	_printf("decimal: %d \noctal: %o \nhex: %x \nHEX: %X\n", b, b, 15, 15);

	_printf("Unsigned: %u\n", -12);
	_printf("S: %S\n", "Best\nSchool");
	_printf("p: %p\n", p);
	return (0);
}
