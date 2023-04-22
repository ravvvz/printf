# _printf function (A Project)

This is a custom implementation of the printf function in C programming language, with some special specifications.

## Functionality

This printf function can print strings, characters, integers, and can also handle formatting options such as:

- `%c` - prints a single character
- `%s` - prints a string
- `%d` - prints a signed integer
- `%i` - prints a signed integer
- `%u` - prints an unsigned integer
- `%o` - prints an octal integer
- `%x` - prints a hexadecimal number in lowercase
- `%X` - prints a hexadecimal number in uppercase
- `%%` - prints a percent symbol

## Usage

To use the _printf function, simply include the "main.h" header file in our C code and call the function with the desired arguments. Here's an example:


```c
#include "holberton.h"

int main(void)
{
int num = 42;
char c = 'H';
char *str = "Hello, Holberton!";

_printf("%c is my favorite letter.\n", c);
_printf("The answer to everything is %d.\n", num);
_printf("Say: %s\n", str);

return (0);
}
```


## Compilation

To compile the _printf function, simply run the following command:

```bash
 gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
```


## Authors

- Donald - [ravvvz](https://github.com/ravvvz)
- Faozeey - [Faozeey](https://github.com/Faozeey)
