#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdint.h>

#define KILO_BYTE 1024
/**
 * struct func - group of functions to perform
 * @c: the value to look out for
 * @func_ptr: the function to point to
 *
 * Description: should scan through the list and choose the
 * right function for operation
 */

typedef struct func
{
	char c;
	int (*func_ptr)(va_list);
} f_options;

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list);
int print_string(va_list);
int (*check_function(char))(va_list);
int print_int(va_list);
void print_num_unsigned_int(unsigned long int, int *);
void print_num(int, int *);
int print_binary(va_list);
int print_octal(va_list);
int print_hex(va_list);
int print_hex_cap(va_list);
int print_unsigned(va_list);
int custom_convert(va_list);
void print_hex_custom(int *, int *);
int address_print(va_list);

#endif /* MAIN_H */

