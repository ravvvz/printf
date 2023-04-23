#include "main.h"

/**
 * print_string - prints a string
 * @str: takes in a char pointer
 *
 * Return: Number of char printed
 */

int print_string(char *str)
{
	int i, count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		count += _putchar(str[i]);
		i++;
	}

	return (count);
}

