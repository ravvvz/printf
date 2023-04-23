#include "main.h"

/**
 * main - check our code
 *
 * Return: Always 0.
 */

int main(void)
{
	char *string = "was a lady, I'd be so fine";
	char *str = NULL;
	char c = 'I';
	int original = 0, fake = 0;

	printf("Standard Library (printf):\n\n");

	original = printf("If %c %s %%\n", c, string);

	printf("Original: %d\n", original);

	original = printf("Let's try to printf a simple sentence.\n");

	printf("Original: %d\n", original);
	printf("Character:[%c]\n", 'H');
	printf("String:[%s]\n", "I am a string !");
	original = printf("Percent:[%%]\n");
	printf("%d\n", original);


	printf("-----------------------------------\n\n");
	
	printf("Our Customized (printf):\n\n");

	fake = _printf("If %c %s %%\n", c, string);
	printf("%d\n", fake);
	fake = _printf("Let's try to printf a simple sentence.\n");
	printf("Fake: %d\n", fake);
	_printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	fake = _printf("Percent:[%%]\n");
	printf("%d\n", fake);

	original = printf("%s\n", str);
	printf("%d\n", original);
	fake = _printf("%s\n", str);
	printf("%d\n", fake);
	return (0);
}
