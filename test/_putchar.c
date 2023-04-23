#include "main.h"

/**
 * _putchar - prints a character
 * @c: character
 *
 * Return: int
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

