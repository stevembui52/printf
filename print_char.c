#include "main.h"
/**
 * print_chr - prints a character in the stdoutput
 * @c:character to be printed
 * Return:characters printed
 */
int print_chr(char c)
{
	return (write(1, &c, 1));
}

