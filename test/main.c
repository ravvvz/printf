#include "main.h"

/**
 * main - check our code
 *
 * Return: Always 0.
 */

int main(void)
{
	char *string = "was a lady, I'd be so fine";
	char c = 'I';
	int original = 0, fake = 0;

	printf("Standard Library (printf):\n\n");

	original = printf("If %c %s %%\n", c, string);

	printf("Original: %d\n", original);


	printf("-----------------------------------\n\n");
	
	printf("Our Customized (printf):\n\n");

	fake = _printf("If %c %s %%\n", c, string);
	printf("Fake: %d\n", fake);

	return (0);
}
