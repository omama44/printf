/**
 * This Code is for writing the basic C data types, eg..,
 * integer, char, string, plus printing '%'
 * using _putchar, and recursive functions to print integers and strings
*/

#include "main.h"

int put_num(unsigned int n);

/**
 * print_char - write to stdout a single character
 * @args: va_list holding the current parameter of the function
 * in this case holding a single char
 * Return: 1 if success, -1 other-wise, 0 means no char printed
 */

int print_char(va_list args)
{
	char c = va_arg(args, int);
	return (_putchar(c));
}
/**
 * print_int - write an integer number to stdout
 * @args: va_list holding the current parameter of the function _printf
 * in this case holding an integer number
 * Return: number of wrote digits
 */

int print_int(va_list args)
{
        int i = va_arg(args, int);
        if (i < 0)
        {
		_putchar('-');
                i = -i;
                return (put_num((unsigned int)i) + 1);
        }
        return (put_num((unsigned int)i));
}

/**
 * print_float - print function
 * DESCRIPTION: a function that prints float numbers
 * @args: arguments passed to the function to be printed
 * @: number of printed characters
 * Return: number of printed characters
 */
int print_float(va_list args)
{
        float n = va_arg(args, double);
	int i, printed_count = 0;
	char str[20];

	if (n < 0)
	{
		n = -n;
		printed_count += _putchar('-');
	}
	sprintf(str, "%.6f", n);
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (printed_count);

}

/**
 * print_unsigned - write unsigned number to stdout
 * @args: va_list holding the current parameter of the function _printf, in this case
 *        an unsigned number
 * Return: number of printed chars
 */
int print_unsigned(va_list args)
{
        unsigned int i = va_arg(args, unsigned int);
        return (put_num(i));
}
/**
 * put_num - write multi-digits integer to stdout
 * @n: the integer to be wrote
 * Return: number of wrote digits
 */
int put_num(unsigned int n)
{
	static int printed_chars = 0;
	if (n / 10 == 0)
        {
		return(_putchar(n + '0'));
	}
	printed_chars += put_num(n / 10);
	printed_chars += _putchar((n % 10) + '0');
	return (printed_chars);
}
