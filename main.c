#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0
 */

int main(void)
{
	int v = -12, i = 20;
	char *str = "If I was a girl, I'd be so fine";
	char c = 'E';

	printf("Original Printf: \n");

	printf("%s \n%c \nv: %d\n i: %d\n",
			str, c, v, i);

	printf("_____________________________\n\n");
	printf("Our Printf: \n");

	_printf("%s \n%c \nv: %d\n i: %d\n",
			str, c, v, i);
	_printf("%b\n", 98);

	return (0);
}
