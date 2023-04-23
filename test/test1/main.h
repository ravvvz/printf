#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

#define KILO_BYTE 1024

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(char c);
int print_string(char *str);

#endif /* MAIN_H */

