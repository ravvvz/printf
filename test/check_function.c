#include "main.h"

/**
 * check_function - character and sends a function to perform operation
 * @c: takes in a character
 *
 * Return: pointer to function to perform op
 */

int (*check_function(char c))(va_list ap)
{
	f_options opr[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_int},
		{'i', print_int},
		{'b', print_binary},
		{'x', NULL}
	};
	int i;

	i = 0;
	while (opr[i].c != 'x')
	{
		if (opr[i].c == c)
			return (opr[i].func_ptr);
		i++;
	}

	return (NULL);
}
