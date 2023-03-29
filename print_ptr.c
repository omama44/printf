#include <stdint.h>
#include "main.h"
/**
 * print_ptr - print function
 * DESCRIPTION: a function that prints pointer
 * @args: arguments passed to the function to be printed
 * @: number of printed characters
 * Return: number of printed characters
 */
int print_ptr(va_list args)
{
	void* ptr = va_arg(args, void*);
	uintptr_t value = (uintptr_t)ptr;
	int i, digit, printed_count = 0, zero = 0;
	char c;
	
	putchar('0');
	putchar('x');
	printed_count += 2;

	for (i = (sizeof(void*) * 2) - 1; i >= 0; i--)
	{
		digit = (value >> (i * 4)) & 0xf;
		if (digit == 0 && !zero)
		{
			continue;
		}
		zero = 1;
		if (digit < 10)
		{
			c = '0' + digit;
		} else
		{
			c = 'a' + (digit - 10);
		}
		putchar(c);
		printed_count++;
	}

	return (printed_count);
}
