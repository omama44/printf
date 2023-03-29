#include "main.h"

/**
 * print_nl - print newline to the stdout
 * Return: number of printed chars
 */
int print_nl()
{
        return (_putchar(10));
}

/**
 * print_cr - print carriage return to stdout
 * Return: number of printed chars
*/
int print_cr()
{
        return (_putchar('\r'));
}

/**
 * print_np - print new page
 * Return: number of printed chars
*/
int print_np()
{
        return (_putchar(12));
}

/**
 * print_tab - print horizontal tab
 * Return: number of printed chars
*/
int print_tab()
{
        return (_putchar(9));
}

/**
 * print_vtab - print vertical tab
 * Return: number of printed chars
*/
int print_vtap()
{
        return (_putchar(11));
}
