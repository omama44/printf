#include "main.h"
/**
 * _putchar - write a single character to stdout
 * @c: character to write
 * Return: 1-if success -1 other-wise
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
