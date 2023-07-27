#include "main.h"
/**
 * print_int - prints an integer value
 * @b: integer to be printed
 * Return: number of integer to be printed
 *
 */
int print_int(long b)
{
	int count = 0;
	char *symbols = "0123456789"
		if (b < 0)
		{
			write(1, "-" 1);
			return (print_int(-b) + 1);
		}
		else if (b < 10)
		{
		return (print_char(symbols[b]));
		}
		else
		{
			count = print_int(b / 10);
			return (count + print_int(b % 10));
		}
	return (count);
}
