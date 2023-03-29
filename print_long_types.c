/**
 * write to stdout long data type number in different format
 * print_long_num - write to stdout long integer in decimal format
 * print_long_c_hex - write to stdout long integer in HEXADECIMAL format
 * print_long_s_hex - write to stdout long integer in hexadecimal format
 * print_long_octal - write to stdout long integer in octal format
 * print_long_unsigned - write to stdout long unsigned integer
*/
#include "main.h"

/**
 * print_long_num - write to stdout long integer in decimal format
 * @num: long integer to wrote
 * Return: number of printed chars
*/
int print_long_num(long num)
{
        static int printed_chars = 0;
        if (num / 10 == 0)
        {
                return (_putchar(num + '0'));
        }
        printed_chars += print_long_num(num / 10);
        return (printed_chars + _putchar(num % 10 + '0'));
}

/**
 * print_long_c_hex - write to stdout long integer in HEXADECIMAL format
 * @num: unsigned long integer to wrote
 * Return: number of printed chars
*/
int print_long_c_hex(unsigned long num)
{
        static int printed_chars = 0;
        if (num / 16 == 0)
        {
                if (num >= 10)
                        return (printed_chars + _putchar((num - 10) + 'A'));
                return (printed_chars + _putchar(num + '0'));
        }
        printed_chars += print_long_c_hex(num / 16);
        if (num % 16 >= 10)
                return (printed_chars + _putchar((num % 16 - 10) + 'A'));
        return (printed_chars + _putchar(num % 16 + '0'));
}

/**
 * print_long_s_hex - write to stdout long integer in hexadecimal format
 * @num: unsigned long integer to wrote
 * Return: number of printed chars
*/
int print_long_s_hex(unsigned long num)
{
        static int printed_chars = 0;
        if (num / 16 == 0)
        {
                if (num >= 10)
                        return (printed_chars + _putchar((num - 10) + 'a'));
                return (printed_chars + _putchar(num +'0'));
        }
        printed_chars += print_long_s_hex(num / 16);
        if (num % 16 >= 10)
                return (printed_chars + _putchar((num % 16 - 10) + 'a'));
        return (printed_chars + _putchar(num % 16 + '0'));
}

/**
 * print_long_octal - write to stdout long integer in octal format
 * @num: unsigned long integer to wrote
 * Return: number of printed chars
*/
int print_long_octal(unsigned long num)
{
        static int printed_chars = 0;
        if (num / 8 == 0)
        {
                return (printed_chars + _putchar(num + '0'));
        }
        printed_chars += print_long_c_hex(num / 8);
        return (printed_chars + _putchar(num % 8 + '0'));
}

/**
 * print_unsigned_long - write to stdout unsigned long integer in decimal format
 * @num: unsigned long integer to wrote
 * Return: number of printed chars
*/
int print_long_unsigned(unsigned long num)
{
        static int printed_chars = 0;
        if (num / 10 == 0)
        {
                return (_putchar(num + '0'));
        }
        printed_chars += print_long_num(num / 10);
        return (printed_chars + _putchar(num % 10 + '0'));
}
