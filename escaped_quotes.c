#include "main.h"

/**
 * print_bslash - write back-slash to stdout
 * Return: number of printed chars 1
*/
int print_bslash(void)
{
	return (_putchar(92));
}

/**
 * print_sq - write single quote to stdout
 * Return: number of printed char
*/
int print_sq(void)
{
	return (_putchar(44));
}

/**
 * print_dq - write double quote to stdout
 * Return: number of printed char
*/
int print_dq(void)
{
	return (_putchar(34));
}
