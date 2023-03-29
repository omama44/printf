/**
 * Write to the stdout, string variable and pointer data type
*/
#include "main.h"

/**
 * print_str - write an array of chars to stdout
 * @args: va_list holding the current parameter of the _printf function, int this
 *        case a pointer to char array
 * Return: number of printed chars, -1 if failed
*/
int print_str(va_list args)
{
        char *str;

        int printed_chars = 0;

        str = va_arg(args, char *);
        if (str == NULL)
                str = "(null)";
        while (*str)
        {
                printed_chars += print_char(*str);
                str++;
        }
        return (printed_chars);
}

/**
 * print_ptr - write to stdout pointer value
 * @args: va_list holding the current parameter of the _printf function, in
 *              this case a pointer
 * Return: number of printed chars
*/
int print_ptr(va_list args)
{
        return(0);
}
