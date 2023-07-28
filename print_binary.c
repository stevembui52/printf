#include "main.h"
/**
 * print_bnr - prints a binary number
 *@n:the number to be printed
 *Return:the binary number
 */
int print_bnr(int n)
{
	if (n > 1)
		print_bnr(n / 2);
	return(print_chr('0' + n % 2));
}
