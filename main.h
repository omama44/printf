#ifndef MAIN_H
#define MAIN_H

#define NUM_OF_FLOATING_POINT 1000000

#include <unistd.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int _putchar(char c);
int _printf(const char *format, ...);

int print_char(va_list args);
int print_int(va_list args);
int print_float(va_list args);
int print_unsigned(va_list args);
int print_str(va_list args);
int print_ptr(va_list args);
int print_s_hex(va_list args);
int print_c_hex(va_list args);
int print_octal(va_list args);
int print_binary(va_list args);

int print_long(va_list args, char *format);
int print_long_num(long num);
int print_long_c_hex(unsigned long num);
int print_long_s_hex(unsigned long num);
int print_long_octal(unsigned long num);
int print_long_unsigned(unsigned long num);

int print_short(va_list args, char *format);
int print_short_num( short num);
int print_short_c_hex(unsigned short num);
int print_short_s_hex(unsigned short num);
int print_short_octal(unsigned short num);
int print_short_unsigned(unsigned short num);

int print_nl();
int print_cr();
int print_np();
int print_tab();
int print_vtap();
int print_bell();
int print_bspace();
int print_qm();
int print_bslash();
int print_sq();
int print_dq();
#endif
